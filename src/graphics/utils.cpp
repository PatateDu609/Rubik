#include "graphics/utils.h"

#include "application.h"

#include <GLFW/glfw3.h>
#include <set>
#include <vulkan/vulkan.h>

namespace graphics {

const std::vector VALIDATION_LAYERS = {
	"VK_LAYER_KHRONOS_validation",
};

const std::vector DEVICE_EXTENSIONS = {
	VK_KHR_SWAPCHAIN_EXTENSION_NAME,
#if defined __APPLE__ || (defined VK_KHR_portability_enumeration && VK_KHR_portability_enumeration == 1)
	"VK_KHR_portability_subset",
#endif
};

std::vector<const char *> get_required_extensions() {
	uint32_t				  glfwExtensionCount = 0;
	const char				**glfwExtensions	 = glfwGetRequiredInstanceExtensions(&glfwExtensionCount);

	std::vector<const char *> extensions(glfwExtensions, glfwExtensions + glfwExtensionCount);

	if constexpr (ENABLE_VALIDATION_LAYERS) // NOLINT: Simplify
		extensions.push_back(VK_EXT_DEBUG_UTILS_EXTENSION_NAME);

#if defined __APPLE__ || (defined VK_KHR_portability_enumeration && VK_KHR_portability_enumeration == 1)
	extensions.push_back(VK_KHR_PORTABILITY_ENUMERATION_EXTENSION_NAME);
	extensions.push_back(VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME);
#endif

	return extensions;
}


bool check_validation_layer_support() {
	uint32_t layerCount;
	vkEnumerateInstanceLayerProperties(&layerCount, nullptr);

	std::vector<VkLayerProperties> availableLayers(layerCount);
	vkEnumerateInstanceLayerProperties(&layerCount, availableLayers.data());

	for (const auto &layerName : VALIDATION_LAYERS) {
		bool found = false;
		for (const auto &layer : availableLayers) {
			if (std::strcmp(layer.layerName, layerName) == 0) {
				found = true;
				break;
			}
		}

		if (!found)
			return false;
	}
	return true;
}


bool check_device_extension_support(const VkPhysicalDevice &physicalDevice) {
	uint32_t extensionCount;
	vkEnumerateDeviceExtensionProperties(physicalDevice, nullptr, &extensionCount, nullptr);

	std::vector<VkExtensionProperties> availableExtensions(extensionCount);
	vkEnumerateDeviceExtensionProperties(physicalDevice, nullptr, &extensionCount, availableExtensions.data());

	std::set<std::string> requiredExtensions(DEVICE_EXTENSIONS.begin(), DEVICE_EXTENSIONS.end());
	for (const auto &extension : availableExtensions)
		requiredExtensions.erase(extension.extensionName);

	return requiredExtensions.empty();
}

VkSampleCountFlagBits get_max_usable_sample_count(const VkPhysicalDevice &physical) {
	VkPhysicalDeviceProperties props;
	vkGetPhysicalDeviceProperties(physical, &props);

	const VkSampleCountFlags counts = props.limits.framebufferColorSampleCounts & props.limits.framebufferDepthSampleCounts;
	if (counts & VK_SAMPLE_COUNT_64_BIT)
		return VK_SAMPLE_COUNT_64_BIT;
	if (counts & VK_SAMPLE_COUNT_32_BIT)
		return VK_SAMPLE_COUNT_32_BIT;
	if (counts & VK_SAMPLE_COUNT_16_BIT)
		return VK_SAMPLE_COUNT_16_BIT;
	if (counts & VK_SAMPLE_COUNT_8_BIT)
		return VK_SAMPLE_COUNT_8_BIT;
	if (counts & VK_SAMPLE_COUNT_4_BIT)
		return VK_SAMPLE_COUNT_4_BIT;
	if (counts & VK_SAMPLE_COUNT_2_BIT)
		return VK_SAMPLE_COUNT_2_BIT;

	return VK_SAMPLE_COUNT_1_BIT;
}

std::pair<VkBuffer, VkDeviceMemory> create_buffer(const VkDevice &device, const VkPhysicalDevice &physical, const VkDeviceSize size,
												  const VkBufferUsageFlags usage, const VkMemoryPropertyFlags properties) {
	VkBuffer		   buffer;
	VkDeviceMemory	   mem;

	VkBufferCreateInfo createInfo{};
	createInfo.sType	   = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
	createInfo.size		   = size;
	createInfo.usage	   = usage;
	createInfo.sharingMode = VK_SHARING_MODE_EXCLUSIVE;

	if (vkCreateBuffer(device, &createInfo, nullptr, &buffer) != VK_SUCCESS) {
		throw std::runtime_error("couldn't create vertex buffer for current device");
	}

	VkMemoryRequirements memReqs{};
	vkGetBufferMemoryRequirements(device, buffer, &memReqs);

	VkMemoryAllocateInfo allocInfo{};
	allocInfo.sType			  = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
	allocInfo.allocationSize  = memReqs.size;
	allocInfo.memoryTypeIndex = find_memory_type(physical, memReqs.memoryTypeBits, properties);

	if (vkAllocateMemory(device, &allocInfo, nullptr, &mem) != VK_SUCCESS) {
		throw std::runtime_error("couldn't allocate memory for vertex buffer");
	}
	vkBindBufferMemory(device, buffer, mem, 0);

	return {buffer, mem};
}

void copy_buffer(const VkDevice &device, const VkCommandPool &commandPool, const VkQueue &queue, const VkBuffer &src, const VkBuffer &dst,
				 const VkDeviceSize size) {
	const VkCommandBuffer &cmdBuffer = begin_single_time_command(device, commandPool);

	VkBufferCopy		   cpy{};
	cpy.size	  = size;
	cpy.srcOffset = 0;
	cpy.dstOffset = 0;
	vkCmdCopyBuffer(cmdBuffer, src, dst, 1, &cpy);

	end_single_time_command(device, commandPool, cmdBuffer, queue);
}

VkCommandBuffer begin_single_time_command(const VkDevice &device, const VkCommandPool &commandPool) {
	VkCommandBuffer				cmdBuffer;
	VkCommandBufferAllocateInfo allocateInfo{};
	allocateInfo.sType				= VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
	allocateInfo.level				= VK_COMMAND_BUFFER_LEVEL_PRIMARY;
	allocateInfo.commandPool		= commandPool;
	allocateInfo.commandBufferCount = 1;

	if (vkAllocateCommandBuffers(device, &allocateInfo, &cmdBuffer) != VK_SUCCESS) {
		throw std::runtime_error("couldn't allocate new command buffer for current device");
	}

	VkCommandBufferBeginInfo beginInfo{};
	beginInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
	beginInfo.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
	vkBeginCommandBuffer(cmdBuffer, &beginInfo);

	return cmdBuffer;
}

void end_single_time_command(const VkDevice &device, const VkCommandPool &commandPool, const VkCommandBuffer &cmdBuffer, const VkQueue &queue) {
	vkEndCommandBuffer(cmdBuffer);

	VkSubmitInfo submitInfo{};
	submitInfo.sType			  = VK_STRUCTURE_TYPE_SUBMIT_INFO;
	submitInfo.commandBufferCount = 1;
	submitInfo.pCommandBuffers	  = &cmdBuffer;

	vkQueueSubmit(queue, 1, &submitInfo, VK_NULL_HANDLE);
	vkQueueWaitIdle(queue);

	vkFreeCommandBuffers(device, commandPool, 1, &cmdBuffer);
}

uint32_t find_memory_type(const VkPhysicalDevice &physical, const uint32_t type_filter, const VkMemoryPropertyFlags properties) {
	VkPhysicalDeviceMemoryProperties memProps;
	vkGetPhysicalDeviceMemoryProperties(physical, &memProps);

	for (uint32_t i = 0; i < memProps.memoryTypeCount; i++) {
		if ((type_filter & (1 << i)) && (memProps.memoryTypes[i].propertyFlags & properties) == properties) {
			return i;
		}
	}

	throw std::runtime_error("couldn't find suitable memory type");
}

VkVertexInputBindingDescription VertexData::getBindingDesc() {
	VkVertexInputBindingDescription res{};
	res.binding	  = 0;
	res.stride	  = sizeof(VertexData);
	res.inputRate = VK_VERTEX_INPUT_RATE_VERTEX;

	return res;
}

std::array<VkVertexInputAttributeDescription, 2> VertexData::getAttributeDescs() {
	std::array<VkVertexInputAttributeDescription, 2> attrs{};

	attrs[0].binding  = 0;
	attrs[0].location = 0;
	attrs[0].format	  = VK_FORMAT_R32G32B32_SFLOAT;
	attrs[0].offset	  = offsetof(VertexData, position);

	attrs[1].binding  = 0;
	attrs[1].location = 1;
	attrs[1].format	  = VK_FORMAT_R32G32B32_SFLOAT;
	attrs[1].offset	  = offsetof(VertexData, color);

	return attrs;
}


} // namespace graphics
