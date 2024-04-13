#include "graphics/vulkan.h"

#include "application.h"
#include "graphics/debug.h"
#include "graphics/queue_families.h"
#include "graphics/swap_chain.h"
#include "graphics/utils.h"

#include <algorithm>
#include <iostream>
#include <ranges>
#include <sstream>
#include <stdexcept>


namespace graphics {

VulkanInstance::VulkanInstance() {
	create_instance();
	create_debug_messenger();
}


VulkanInstance::~VulkanInstance() {
	for (size_t i = 0; i < MAX_FRAMES_IN_FLIGHT; i++) {
		if (i < _inFlightFences.size())
			vkDestroyFence(_device, _inFlightFences[i], nullptr);
		if (i < _renderFinishedSemaphores.size())
			vkDestroySemaphore(_device, _renderFinishedSemaphores[i], nullptr);
		if (i < _imageAvailableSemaphores.size())
			vkDestroySemaphore(_device, _imageAvailableSemaphores[i], nullptr);
	}

	_cubeAccessors.clear();

	vkDestroyCommandPool(_device, _shortLivedCommandPool, nullptr);
	vkDestroyCommandPool(_device, _commandPool, nullptr);

	cleanup_swapchain();

	vkDestroyDescriptorPool(_device, _descriptorPool, nullptr);
	_pipeline.reset();
	vkDestroyDevice(_device, nullptr);

	if constexpr (ENABLE_VALIDATION_LAYERS) // NOLINT: Simplify
		debug::destroy_debug_utils_messenger_ext(_instance, _debugMessenger, nullptr);

	_renderer->cleanup_surface();

	vkDestroyInstance(_instance, nullptr);
}

void VulkanInstance::create_cube_accessors() {
	for (size_t idx = 0; idx < geometry::cubes.size(); idx++) {
		_cubeAccessors.emplace_back(idx).use(_physical);
	}
}

void VulkanInstance::init_cube_accessors() {
	_renderer->init_mvp_matrix();
	for (auto &accessor : _cubeAccessors) {
		accessor.update_translation(_renderer->translation);
		accessor.update_rotation(_renderer->rotation);
		accessor.update_scale(_renderer->scale);
		accessor.update_projection(_renderer->proj);
		accessor.update_view(_renderer->view);

		accessor.use(_shortLivedCommandPool);
		accessor.use(_descriptorPool);
		accessor.use(_pipeline->descriptorSetLayout);
		accessor.useTransferQueue(_renderer->_graphics);
		accessor.init_index_buffer();
		accessor.init_vertex_buffer();
		accessor.init_uniform_buffers();
		accessor.init_descriptor_sets();
	}
}


VkSurfaceKHR VulkanInstance::get_surface() const {
	return _renderer->get_surface();
}


void VulkanInstance::create_instance() {
	if (ENABLE_VALIDATION_LAYERS && !check_validation_layer_support()) // NOLINT: Simplify
		throw std::runtime_error("validation layers requested but not supported");

	VkApplicationInfo appInfo{};
	appInfo.sType			   = VK_STRUCTURE_TYPE_APPLICATION_INFO;
	appInfo.apiVersion		   = VK_API_VERSION_1_0;
	appInfo.pApplicationName   = WINDOW_TITLE;
	appInfo.applicationVersion = APPLICATION_VERSION;
	appInfo.pEngineName		   = ENGINE;
	appInfo.engineVersion	   = ENGINE_VERSION;

	VkInstanceCreateInfo createInfo{};
	createInfo.sType				   = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
	createInfo.pApplicationInfo		   = &appInfo;

	const auto extensions			   = get_required_extensions();
	createInfo.enabledExtensionCount   = static_cast<uint32_t>(extensions.size());
	createInfo.ppEnabledExtensionNames = extensions.data();

#if defined __APPLE__ || (defined VK_KHR_portability_enumeration && VK_KHR_portability_enumeration == 1)
	createInfo.flags |= VK_INSTANCE_CREATE_ENUMERATE_PORTABILITY_BIT_KHR;
#endif

	createInfo.enabledLayerCount = 0;
	if (ENABLE_VALIDATION_LAYERS) { // NOLINT: Simplify
		createInfo.enabledLayerCount   = static_cast<uint32_t>(VALIDATION_LAYERS.size());
		createInfo.ppEnabledLayerNames = VALIDATION_LAYERS.data();

		const auto debugCreateInfo	   = debug::get_debug_messenger_create_info();
		createInfo.pNext			   = &debugCreateInfo;
	}

	if (vkCreateInstance(&createInfo, nullptr, &_instance) != VK_SUCCESS)
		throw std::runtime_error("couldn't create vulkan instance");

	std::cerr << "Vulkan instance created" << std::endl;
}


void VulkanInstance::create_debug_messenger() {
	if constexpr (!ENABLE_VALIDATION_LAYERS)
		// ReSharper disable once CppDFAUnreachableCode
		return;

	const auto createInfo = debug::get_debug_messenger_create_info();

	if (debug::create_debug_utils_messenger_ext(_instance, &createInfo, nullptr, &_debugMessenger) != VK_SUCCESS)
		throw std::runtime_error("couldn't setup debug messenger");
	std::cerr << "Debug messenger is set up" << std::endl;
}


VulkanInstance::operator VkInstance() const {
	return _instance;
}


std::vector<VkPhysicalDevice> VulkanInstance::enumerate_physical_devices() const {
	uint32_t deviceCount = 0;
	vkEnumeratePhysicalDevices(_instance, &deviceCount, nullptr);

	std::vector<VkPhysicalDevice> physicalDevice(deviceCount);
	vkEnumeratePhysicalDevices(_instance, &deviceCount, physicalDevice.data());

	return physicalDevice;
}


void VulkanInstance::create_device() {
	auto								 indices = find_queue_families(_physical, _renderer->get_surface());

	std::vector<VkDeviceQueueCreateInfo> queueCreateInfos;
	auto								 uniqueQueueFamilies = static_cast<std::set<uint32_t>>(indices);
	float								 queuePriority		 = 1.0f;

	for (uint32_t queueFamily : uniqueQueueFamilies) {
		decltype(queueCreateInfos)::value_type queueCreateInfo{};
		queueCreateInfo.sType			 = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
		queueCreateInfo.queueFamilyIndex = queueFamily;
		queueCreateInfo.queueCount		 = 1;
		queueCreateInfo.pQueuePriorities = &queuePriority;

		queueCreateInfos.push_back(queueCreateInfo);
	}

	VkPhysicalDeviceFeatures deviceFeatures{};
	deviceFeatures.samplerAnisotropy = VK_TRUE;
	deviceFeatures.sampleRateShading = VK_TRUE;
	deviceFeatures.fillModeNonSolid	 = VK_TRUE;

	VkDeviceCreateInfo createInfo{};
	createInfo.sType				   = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
	createInfo.pQueueCreateInfos	   = queueCreateInfos.data();
	createInfo.queueCreateInfoCount	   = static_cast<uint32_t>(queueCreateInfos.size());
	createInfo.pEnabledFeatures		   = &deviceFeatures;
	createInfo.enabledExtensionCount   = static_cast<uint32_t>(DEVICE_EXTENSIONS.size());
	createInfo.ppEnabledExtensionNames = DEVICE_EXTENSIONS.data();
	createInfo.enabledLayerCount	   = 0;

	if (ENABLE_VALIDATION_LAYERS) { // NOLINT: Simplify
		createInfo.enabledLayerCount   = static_cast<uint32_t>(VALIDATION_LAYERS.size());
		createInfo.ppEnabledLayerNames = VALIDATION_LAYERS.data();
	}

	if (vkCreateDevice(_physical, &createInfo, nullptr, &_device) != VK_SUCCESS)
		throw std::runtime_error("failed to create vulkan logical device");

	_renderer->acquire_queues(indices);

	std::cerr << "Created successfully a logical device and acquired graphics and present queues" << std::endl;

	std::ranges::for_each(_cubeAccessors.begin(), _cubeAccessors.end(), [this](auto &el) { el.use(_device); });
}

void VulkanInstance::create_swapchain() {
	const SwapChainSupportDetails swapChainSupport = query_swap_chain_support(_physical, get_surface());

	const VkPresentModeKHR		  presentMode	   = swapChainSupport.chooseSwapPresentMode();
	const auto [formatKHR, colorSpace]			   = swapChainSupport.chooseSwapSurfaceFormat();
	const VkExtent2D extent						   = swapChainSupport.chooseSwapExtent(_renderer->_window);

	uint32_t		 imageCount					   = swapChainSupport.capabilities.minImageCount + 1;
	if (swapChainSupport.capabilities.maxImageCount > 0 && imageCount > swapChainSupport.capabilities.maxImageCount)
		imageCount = swapChainSupport.capabilities.maxImageCount;

	VkSwapchainCreateInfoKHR createInfo{};
	createInfo.sType									 = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
	createInfo.surface									 = get_surface();

	createInfo.minImageCount							 = imageCount;
	createInfo.imageExtent								 = extent;
	createInfo.imageFormat								 = formatKHR;
	createInfo.imageColorSpace							 = colorSpace;
	createInfo.imageArrayLayers							 = 1;
	createInfo.imageUsage								 = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;

	const auto [graphicsQueueFamily, presentQueueFamily] = find_queue_families(_physical, get_surface());
	const std::array indices_arr{graphicsQueueFamily.value(), presentQueueFamily.value()};

	if (graphicsQueueFamily != presentQueueFamily) {
		createInfo.imageSharingMode		 = VK_SHARING_MODE_CONCURRENT;
		createInfo.queueFamilyIndexCount = indices_arr.size();
		createInfo.pQueueFamilyIndices	 = indices_arr.data();
	} else {
		createInfo.imageSharingMode		 = VK_SHARING_MODE_EXCLUSIVE;
		createInfo.queueFamilyIndexCount = 0;
		createInfo.pQueueFamilyIndices	 = nullptr;
	}

	createInfo.preTransform	  = swapChainSupport.capabilities.currentTransform;
	createInfo.compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
	createInfo.presentMode	  = presentMode;
	createInfo.clipped		  = VK_TRUE;

	createInfo.oldSwapchain	  = VK_NULL_HANDLE;

	if (vkCreateSwapchainKHR(_device, &createInfo, nullptr, &_swapchain) != VK_SUCCESS) {
		throw std::runtime_error("couldn't create swapchain");
	}

	vkGetSwapchainImagesKHR(_device, _swapchain, &imageCount, nullptr);
	_swapchainImages.resize(imageCount);
	vkGetSwapchainImagesKHR(_device, _swapchain, &imageCount, _swapchainImages.data());

	_swapchainFormat = formatKHR;
	_swapchainExtent = extent;

	std::cerr << "Successfully created swapchain and retrieved associated images" << std::endl;
}

void VulkanInstance::cleanup_swapchain() {
	vkDestroyImageView(_device, _colorImgView, nullptr);
	vkDestroyImage(_device, _colorImg, nullptr);
	vkFreeMemory(_device, _colorImgMemory, nullptr);

	vkDestroyImageView(_device, _depthImgView, nullptr);
	vkDestroyImage(_device, _depthImg, nullptr);
	vkFreeMemory(_device, _depthImgMemory, nullptr);

	for (const auto &framebuffer : _framebuffers) {
		vkDestroyFramebuffer(_device, framebuffer, nullptr);
	}
	_framebuffers.clear();

	for (const auto &imageView : _swapchainImageViews) {
		vkDestroyImageView(_device, imageView, nullptr);
	}

	_swapchainImageViews.clear();

	vkDestroySwapchainKHR(_device, _swapchain, nullptr);
	_swapchainImages.clear();
	_swapchain = VK_NULL_HANDLE;
}


void VulkanInstance::recreate_swapchain() {
	{
		int w, h;
		do {
			glfwGetFramebufferSize(_renderer->_window, &w, &h);
			glfwWaitEvents();
		} while (w == 0 || h == 0);
	}

	vkDeviceWaitIdle(_device);

	cleanup_swapchain();

	create_swapchain();
	create_image_views();
	create_color_resources();
	create_depth_img();
	create_framebuffers();
}


void VulkanInstance::create_image_views() {
	_swapchainImageViews.resize(_swapchainImages.size());

	for (size_t i = 0; i < _swapchainImageViews.size(); i++) {
		const auto ret = create_image_view(_swapchainImages[i], _swapchainFormat, VK_IMAGE_ASPECT_COLOR_BIT, 1);

		if (!ret) {
			throw std::runtime_error("couldn't create image view");
		}

		_swapchainImageViews[i] = *ret;
		std::cerr << "Successfully created image view no " << i << std::endl;
	}
}

void VulkanInstance::create_pipeline(std::string vertex_shader, std::string fragment_shader) {
	_pipeline = std::make_unique<Pipeline>(_device, std::move(vertex_shader), std::move(fragment_shader), _msaaSamples);

	if (!_pipeline->compile_shaders()) {
		const auto &[errors, warnings] = _pipeline->get_num_errors();
		std::cerr << "got " << errors << " errors and " << warnings << " warnings\n" << _pipeline->errors() << std::endl;
		throw std::runtime_error("couldn't compile shaders");
	}
	_pipeline->setup_shader_modules();

	_pipeline->setup_render_pass(_swapchainFormat, find_depth_format());
	_pipeline->create_descriptor_set_layout();
	_pipeline->setup(_swapchainExtent);
}

void VulkanInstance::create_framebuffers() {
	_framebuffers.resize(_swapchainImageViews.size());

	for (size_t i = 0; i < _framebuffers.size(); i++) {
		std::array				attachments = {_colorImgView, _depthImgView, _swapchainImageViews[i]};

		VkFramebufferCreateInfo createInfo{};
		createInfo.sType		   = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
		createInfo.renderPass	   = _pipeline->renderPass;
		createInfo.attachmentCount = attachments.size();
		createInfo.pAttachments	   = attachments.data();
		createInfo.width		   = _swapchainExtent.width;
		createInfo.height		   = _swapchainExtent.height;
		createInfo.layers		   = 1;


		std::ostringstream oss;
		oss << "framebuffer[" << i << "] for current device";

		if (vkCreateFramebuffer(_device, &createInfo, nullptr, &_framebuffers[i]) != VK_SUCCESS) {
			throw std::runtime_error("couldn't create " + oss.str());
		}

		std::cerr << "Created successfully " << oss.str() << "\n";
	}
	std::cerr << std::flush;
}

void VulkanInstance::create_command_pool() {
	const auto [graphicsQueueFamily, presentQueueFamily] = find_queue_families(_physical, get_surface());

	VkCommandPoolCreateInfo createInfo{};
	createInfo.sType			= VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
	createInfo.queueFamilyIndex = *graphicsQueueFamily;
	createInfo.flags			= VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;

	if (vkCreateCommandPool(_device, &createInfo, nullptr, &_commandPool) != VK_SUCCESS) {
		throw std::runtime_error("couldn't create command pool for current device");
	}
	std::cerr << "Created successfully command pool for current device" << std::endl;
}

void VulkanInstance::create_short_lived_command_pool() {
	const auto [graphicsQueueFamily, presentQueueFamily] = find_queue_families(_physical, get_surface());

	VkCommandPoolCreateInfo createInfo{};
	createInfo.sType			= VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
	createInfo.queueFamilyIndex = *graphicsQueueFamily;
	createInfo.flags			= VK_COMMAND_POOL_CREATE_TRANSIENT_BIT;

	if (vkCreateCommandPool(_device, &createInfo, nullptr, &_shortLivedCommandPool) != VK_SUCCESS) {
		throw std::runtime_error("couldn't create short lived command pool for current device");
	}
	std::cerr << "Created successfully short lived command pool for current device" << std::endl;
}

void VulkanInstance::create_command_buffers() {
	_commandBuffers.resize(MAX_FRAMES_IN_FLIGHT);

	VkCommandBufferAllocateInfo allocateInfo{};
	allocateInfo.sType				= VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
	allocateInfo.commandPool		= _commandPool;
	allocateInfo.level				= VK_COMMAND_BUFFER_LEVEL_PRIMARY;
	allocateInfo.commandBufferCount = static_cast<uint32_t>(_commandBuffers.size());

	if (vkAllocateCommandBuffers(_device, &allocateInfo, _commandBuffers.data()) != VK_SUCCESS) {
		throw std::runtime_error("couldn't allocate command buffer for current device");
	}
	std::cerr << "Created successfully command buffer for current device" << std::endl;
}

void VulkanInstance::create_descriptor_pool() {
	std::array<VkDescriptorPoolSize, 1> poolSizes{};
	poolSizes[0].type			 = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
	poolSizes[0].descriptorCount = static_cast<uint32_t>(_cubeAccessors.size() * MAX_FRAMES_IN_FLIGHT);

	VkDescriptorPoolCreateInfo createInfo{};
	createInfo.sType		 = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
	createInfo.poolSizeCount = poolSizes.size();
	createInfo.pPoolSizes	 = poolSizes.data();
	createInfo.maxSets		 = static_cast<uint32_t>(_cubeAccessors.size() * MAX_FRAMES_IN_FLIGHT);

	if (vkCreateDescriptorPool(_device, &createInfo, nullptr, &_descriptorPool) != VK_SUCCESS) {
		throw std::runtime_error("couldn't create new descriptor pool");
	}
	std::cerr << "Created successfully descriptor pool" << std::endl;
}

void VulkanInstance::record_command_buffer(const VkCommandBuffer &command_buffer, const uint32_t image_idx, const uint32_t frame_idx) const {
	VkCommandBufferBeginInfo beginInfo{};
	beginInfo.sType			   = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
	beginInfo.flags			   = 0;
	beginInfo.pInheritanceInfo = nullptr;

	if (vkBeginCommandBuffer(command_buffer, &beginInfo) != VK_SUCCESS) {
		throw std::runtime_error("couldn't begin command buffer");
	}

	constexpr std::array clearValues{
		VkClearValue{.color = {.float32 = {0.0F, 0.0F, 0.0F, 1.0F}}},
		VkClearValue{.depthStencil = {1.0f, 0}},
	};
	VkRenderPassBeginInfo renderPassInfo{};
	renderPassInfo.sType			 = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
	renderPassInfo.renderPass		 = _pipeline->renderPass;
	renderPassInfo.framebuffer		 = _framebuffers[image_idx];
	renderPassInfo.renderArea.offset = {0, 0};
	renderPassInfo.renderArea.extent = _swapchainExtent;
	renderPassInfo.clearValueCount	 = clearValues.size();
	renderPassInfo.pClearValues		 = clearValues.data();

	vkCmdBeginRenderPass(command_buffer, &renderPassInfo, VK_SUBPASS_CONTENTS_INLINE);
	vkCmdBindPipeline(command_buffer, VK_PIPELINE_BIND_POINT_GRAPHICS, _pipeline->pipeline);

	VkViewport viewport{};
	viewport.x		  = 0.0F;
	viewport.y		  = 0.0F;
	viewport.width	  = static_cast<float>(_swapchainExtent.width);
	viewport.height	  = static_cast<float>(_swapchainExtent.height);
	viewport.minDepth = 0.0F;
	viewport.maxDepth = 1.0F;
	vkCmdSetViewport(command_buffer, 0, 1, &viewport);

	VkRect2D scissor{};
	scissor.offset = {0, 0};
	scissor.extent = _swapchainExtent;
	vkCmdSetScissor(command_buffer, 0, 1, &scissor);

	// bind cube accessors
	for (const auto &accessor : _cubeAccessors) {
		accessor.bind(command_buffer, _pipeline->layout, frame_idx);
	}

	vkCmdEndRenderPass(command_buffer);

	if (vkEndCommandBuffer(command_buffer) != VK_SUCCESS) {
		throw std::runtime_error("couldn't record command buffer");
	}
}

void VulkanInstance::create_sync_objects() {
	VkSemaphoreCreateInfo semaphoreCreateInfo{};
	semaphoreCreateInfo.sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;

	VkFenceCreateInfo fenceCreateInfo{};
	fenceCreateInfo.sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
	fenceCreateInfo.flags = VK_FENCE_CREATE_SIGNALED_BIT;

	_imageAvailableSemaphores.resize(MAX_FRAMES_IN_FLIGHT);
	_renderFinishedSemaphores.resize(MAX_FRAMES_IN_FLIGHT);
	_inFlightFences.resize(MAX_FRAMES_IN_FLIGHT);

	for (size_t i = 0; i < MAX_FRAMES_IN_FLIGHT; i++) {
		if (vkCreateSemaphore(_device, &semaphoreCreateInfo, nullptr, &_imageAvailableSemaphores[i]) != VK_SUCCESS ||
			vkCreateSemaphore(_device, &semaphoreCreateInfo, nullptr, &_renderFinishedSemaphores[i]) != VK_SUCCESS) {
			throw std::runtime_error("couldn't create semaphore[" + std::to_string(i) + "] for device");
		}
		if (vkCreateFence(_device, &fenceCreateInfo, nullptr, &_inFlightFences[i])) {
			throw std::runtime_error("couldn't create fence[" + std::to_string(i) + "] for device");
		}
	}

	std::cerr << "Created successfully all fences and semaphores needed" << std::endl;
}

void VulkanInstance::create_depth_img() {
	const VkFormat					format		= find_depth_format();
	constexpr VkImageTiling			tiling		= VK_IMAGE_TILING_OPTIMAL;
	constexpr VkImageUsageFlags		usage		= VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
	constexpr VkMemoryPropertyFlags props		= VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
	constexpr VkImageAspectFlags	aspectFlags = VK_IMAGE_ASPECT_DEPTH_BIT;

	std::tie(_depthImg, _depthImgMemory)		= create_image(_swapchainExtent.width, _swapchainExtent.height, 1, _msaaSamples, format, tiling, usage, props);
	const auto ret								= create_image_view(_depthImg, format, aspectFlags, 1);
	if (!ret) {
		throw std::runtime_error("couldn't create image view for depth image");
	}
	std::cerr << "Created successfully image view for depth image" << std::endl;

	_depthImgView = *ret;

	transition_image_layout(_depthImg, format, VK_IMAGE_LAYOUT_UNDEFINED, VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL, 1);
}

void VulkanInstance::create_color_resources() {
	const VkFormat					   format = _swapchainFormat;
	constexpr VkImageTiling			   tiling = VK_IMAGE_TILING_OPTIMAL;
	constexpr VkImageUsageFlags		   usage  = VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT | VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
	constexpr VkMemoryPropertyFlagBits props  = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;

	std::tie(_colorImg, _colorImgMemory)	  = create_image(_swapchainExtent.width, _swapchainExtent.height, 1, _msaaSamples, format, tiling, usage, props);
	const auto ret							  = create_image_view(_colorImg, format, VK_IMAGE_ASPECT_COLOR_BIT, 1);

	if (!ret) {
		throw std::runtime_error("couldn't create image view for multi sampled setup");
	}
	std::cerr << "Created successfully image view for MSAA use" << std::endl;

	_colorImgView = *ret;
}

void VulkanInstance::render(const uint32_t frame_idx) const {
	_renderer->render(frame_idx);
}

void VulkanInstance::waitIdle() const {
	vkDeviceWaitIdle(_device);
}

void VulkanInstance::mark_framebuffer_resized() {
	_framebufferResized = true;
}

std::pair<VkImage, VkDeviceMemory> VulkanInstance::create_image(const size_t w, const size_t h, const uint32_t mipLevels,
																const VkSampleCountFlagBits numSamples, const VkFormat format, const VkImageTiling tiling,
																const VkImageUsageFlags usage, const VkMemoryPropertyFlags props) const {
	VkImage			  img;
	VkDeviceMemory	  imgMem;

	VkImageCreateInfo createInfo{};
	createInfo.sType		 = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
	createInfo.imageType	 = VK_IMAGE_TYPE_2D;
	createInfo.extent.width	 = w;
	createInfo.extent.height = h;
	createInfo.extent.depth	 = 1;
	createInfo.mipLevels	 = mipLevels;
	createInfo.arrayLayers	 = 1;
	createInfo.format		 = format;
	createInfo.tiling		 = tiling;
	createInfo.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
	createInfo.usage		 = usage;
	createInfo.sharingMode	 = VK_SHARING_MODE_EXCLUSIVE;
	createInfo.samples		 = numSamples;
	createInfo.flags		 = 0;

	if (vkCreateImage(_device, &createInfo, nullptr, &img) != VK_SUCCESS) {
		throw std::runtime_error("couldn't create image");
	}
	std::cerr << "Created successfully image" << std::endl;

	VkMemoryRequirements memReqs;
	vkGetImageMemoryRequirements(_device, img, &memReqs);

	VkMemoryAllocateInfo allocInfo{};
	allocInfo.sType			  = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
	allocInfo.allocationSize  = memReqs.size;
	allocInfo.memoryTypeIndex = find_memory_type(_physical, memReqs.memoryTypeBits, props);

	if (vkAllocateMemory(_device, &allocInfo, nullptr, &imgMem) != VK_SUCCESS) {
		throw std::runtime_error("couldn't allocate memory for image");
	}
	std::cerr << "Allocated successfully memory for image" << std::endl;

	vkBindImageMemory(_device, img, imgMem, 0);

	return {img, imgMem};
}

std::optional<VkImageView> VulkanInstance::create_image_view(const VkImage &image, const VkFormat format, const VkImageAspectFlags &aspectFlags,
															 const uint32_t mipLevels) const {
	VkImageViewCreateInfo createInfo{};
	createInfo.sType						   = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
	createInfo.image						   = image;
	createInfo.viewType						   = VK_IMAGE_VIEW_TYPE_2D;
	createInfo.format						   = format;
	createInfo.subresourceRange.aspectMask	   = aspectFlags;
	createInfo.subresourceRange.baseMipLevel   = 0;
	createInfo.subresourceRange.levelCount	   = mipLevels;
	createInfo.subresourceRange.baseArrayLayer = 0;
	createInfo.subresourceRange.layerCount	   = 1;

	VkImageView view;
	if (vkCreateImageView(_device, &createInfo, nullptr, &view) != VK_SUCCESS) {
		return std::nullopt;
	}

	return view;
}

void VulkanInstance::transition_image_layout(const VkImage &image, const VkFormat format, const VkImageLayout oldLayout, const VkImageLayout newLayout,
											 const uint32_t mipLevels) const {
	const VkCommandBuffer &cmdBuffer = begin_single_time_command(_device, _shortLivedCommandPool);

	VkImageMemoryBarrier   barrier{};
	barrier.sType							= VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
	barrier.oldLayout						= oldLayout;
	barrier.newLayout						= newLayout;
	barrier.srcQueueFamilyIndex				= VK_QUEUE_FAMILY_IGNORED;
	barrier.dstQueueFamilyIndex				= VK_QUEUE_FAMILY_IGNORED;
	barrier.image							= image;
	barrier.subresourceRange.aspectMask		= VK_IMAGE_ASPECT_COLOR_BIT;
	barrier.subresourceRange.baseMipLevel	= 0;
	barrier.subresourceRange.levelCount		= mipLevels;
	barrier.subresourceRange.baseArrayLayer = 0;
	barrier.subresourceRange.layerCount		= 1;

	if (newLayout == VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL) {
		barrier.subresourceRange.aspectMask = VK_IMAGE_ASPECT_DEPTH_BIT;

		if (has_stencil_component(format)) {
			barrier.subresourceRange.aspectMask |= VK_IMAGE_ASPECT_STENCIL_BIT;
		}
	}

	VkPipelineStageFlagBits srcStage;
	decltype(srcStage)		dstStage;

	if (oldLayout == VK_IMAGE_LAYOUT_UNDEFINED && newLayout == VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL) {
		barrier.srcAccessMask = 0;
		barrier.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;

		srcStage			  = VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT;
		dstStage			  = VK_PIPELINE_STAGE_TRANSFER_BIT;
	} else if (oldLayout == VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL && newLayout == VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL) {
		barrier.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
		barrier.dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;

		srcStage			  = VK_PIPELINE_STAGE_TRANSFER_BIT;
		dstStage			  = VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT;
	} else if (oldLayout == VK_IMAGE_LAYOUT_UNDEFINED && newLayout == VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL) {
		barrier.srcAccessMask = 0;
		barrier.dstAccessMask = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT | VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;

		srcStage			  = VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT;
		dstStage			  = VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT;
	} else {
		throw std::invalid_argument("unsupported layout transition");
	}
	barrier.srcAccessMask = 0;
	barrier.dstAccessMask = 0;

	// clang-format off
	vkCmdPipelineBarrier(
		cmdBuffer,
		srcStage, dstStage,
		0,
		0, nullptr,
		0, nullptr,
		1, &barrier);
	// clang-format on

	end_single_time_command(_device, _shortLivedCommandPool, cmdBuffer, _renderer->_graphics);
}

void VulkanInstance::copy_buffer_to_image(const VkBuffer &buffer, const VkImage &image, const uint32_t w, const uint32_t h) const {
	const VkCommandBuffer &cmdBuffer = begin_single_time_command(_device, _shortLivedCommandPool);

	VkBufferImageCopy	   region{};
	region.bufferOffset					   = 0;
	region.bufferRowLength				   = 0;
	region.bufferImageHeight			   = 0;

	region.imageSubresource.aspectMask	   = VK_IMAGE_ASPECT_COLOR_BIT;
	region.imageSubresource.mipLevel	   = 0;
	region.imageSubresource.baseArrayLayer = 0;
	region.imageSubresource.layerCount	   = 1;

	region.imageOffset					   = {0, 0, 0};
	region.imageExtent					   = {w, h, 1};

	vkCmdCopyBufferToImage(cmdBuffer, buffer, image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &region);

	end_single_time_command(_device, _shortLivedCommandPool, cmdBuffer, _renderer->_graphics);
}

VkFormat VulkanInstance::find_depth_format() const {
	// clang-format off
	return find_supported_format(
		{VK_FORMAT_D32_SFLOAT, VK_FORMAT_D32_SFLOAT_S8_UINT, VK_FORMAT_D24_UNORM_S8_UINT},
		VK_IMAGE_TILING_OPTIMAL,
		VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT
	);
	// clang-format on
}


VkFormat VulkanInstance::find_supported_format(const std::vector<VkFormat> &candidates, const VkImageTiling &tiling,
											   const VkFormatFeatureFlags &features) const {
	for (const auto &format : candidates) {
		VkFormatProperties props;
		vkGetPhysicalDeviceFormatProperties(_physical, format, &props);

		if (tiling == VK_IMAGE_TILING_LINEAR && (props.linearTilingFeatures & features) == features) {
			return format;
		}
		if (tiling == VK_IMAGE_TILING_OPTIMAL && (props.optimalTilingFeatures & features) == features) {
			return format;
		}
	}

	throw std::runtime_error("couldn't find appropriate format for given parameters");
}

void VulkanInstance::generate_mip_maps(const VkImage &img, const VkFormat &format, const size_t w, const size_t h, const uint32_t mipLevels) const {
	// Check if image format supports linear blitting
	VkFormatProperties formatProps;
	vkGetPhysicalDeviceFormatProperties(_physical, format, &formatProps);
	if (!(formatProps.optimalTilingFeatures & VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT)) {
		throw std::runtime_error("couldn't generate mipmaps for current texture as device doesn't support linear bliting");
	}

	const VkCommandBuffer &cmdBuffer = begin_single_time_command(_device, _shortLivedCommandPool);

	VkImageMemoryBarrier   barrier{};
	barrier.sType							= VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
	barrier.image							= img;
	barrier.srcQueueFamilyIndex				= VK_QUEUE_FAMILY_IGNORED;
	barrier.dstQueueFamilyIndex				= VK_QUEUE_FAMILY_IGNORED;
	barrier.subresourceRange.aspectMask		= VK_IMAGE_ASPECT_COLOR_BIT;
	barrier.subresourceRange.baseArrayLayer = 0;
	barrier.subresourceRange.layerCount		= 1;
	barrier.subresourceRange.levelCount		= 1;

	auto mipWidth							= static_cast<int32_t>(w);
	auto mipHeight							= static_cast<int32_t>(h);

	for (size_t i = 1; i < mipLevels; i++) {
		barrier.subresourceRange.baseMipLevel = i - 1;
		barrier.oldLayout					  = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
		barrier.newLayout					  = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
		barrier.srcAccessMask				  = VK_ACCESS_TRANSFER_WRITE_BIT;
		barrier.dstAccessMask				  = VK_ACCESS_TRANSFER_READ_BIT;

		// clang-format off
		vkCmdPipelineBarrier(cmdBuffer,
			VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, 0,
			0, nullptr,
			0, nullptr,
			1, &barrier
		);
		// clang-format on

		VkImageBlit blit{};
		blit.srcOffsets[0]				   = {0, 0, 0};
		blit.srcOffsets[1]				   = {mipWidth, mipHeight, 1};
		blit.srcSubresource.aspectMask	   = VK_IMAGE_ASPECT_COLOR_BIT;
		blit.srcSubresource.mipLevel	   = i - 1;
		blit.srcSubresource.baseArrayLayer = 0;
		blit.srcSubresource.layerCount	   = 1;
		blit.dstOffsets[0]				   = {0, 0, 0};
		blit.dstOffsets[1]				   = {mipWidth > 1 ? mipWidth / 2 : 1, mipHeight > 1 ? mipHeight / 2 : 1, 1};
		blit.dstSubresource.aspectMask	   = VK_IMAGE_ASPECT_COLOR_BIT;
		blit.dstSubresource.mipLevel	   = i;
		blit.dstSubresource.baseArrayLayer = 0;
		blit.dstSubresource.layerCount	   = 1;

		// clang-format off
		vkCmdBlitImage(cmdBuffer,
			img, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
			img, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
			1, &blit,
			VK_FILTER_LINEAR);
		// clang-format on

		barrier.oldLayout				   = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
		barrier.newLayout				   = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
		barrier.srcAccessMask			   = VK_ACCESS_TRANSFER_READ_BIT;
		barrier.dstAccessMask			   = VK_ACCESS_SHADER_READ_BIT;
		// clang-format off
		vkCmdPipelineBarrier(cmdBuffer,
			VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT, 0,
			0, nullptr,
			0, nullptr,
			1, &barrier
		);
		// clang-format on

		if (mipWidth > 1)
			mipWidth /= 2;
		if (mipHeight > 1)
			mipHeight /= 2;
	}

	barrier.subresourceRange.baseMipLevel = mipLevels - 1;
	barrier.oldLayout					  = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
	barrier.newLayout					  = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
	barrier.srcAccessMask				  = VK_ACCESS_TRANSFER_WRITE_BIT;
	barrier.dstAccessMask				  = VK_ACCESS_SHADER_READ_BIT;


	// clang-format off
	vkCmdPipelineBarrier(cmdBuffer,
		VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT, 0,
		0, nullptr,
		0, nullptr,
		1, &barrier
	);
	// clang-format on

	end_single_time_command(_device, _shortLivedCommandPool, cmdBuffer, _renderer->_graphics);
}

} // namespace graphics
