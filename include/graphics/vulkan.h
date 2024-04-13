#ifndef SCOP_VULKAN_H
#define SCOP_VULKAN_H

#include "pipeline.h"
#include "renderer.h"
#include "utils.h"
#include "vertices.h"

#include <vector>
#include <vulkan/vulkan.h>

namespace graphics {

constexpr auto	   ENGINE		  = "gb_engine";
constexpr uint32_t ENGINE_VERSION = VK_MAKE_VERSION(1, 0, 0);

class VulkanInstance {
public:
	 VulkanInstance();
	~VulkanInstance();

private:
	void	 create_instance();
	void	 create_debug_messenger();
	explicit operator VkInstance() const;

public:
	template <typename... Args>
	void set_renderer(Args &&...args) {
		_renderer = std::make_shared<Renderer>(std::forward<Args>(args)...);
	}

	void set_msaa_samples(const VkSampleCountFlagBits &msaaSamples) {
		_msaaSamples = msaaSamples;
	}

	void use(const VkPhysicalDevice &physical_device) {
		_physical = physical_device;
	}

	[[nodiscard]] VkSurfaceKHR					get_surface() const;

	[[nodiscard]] std::vector<VkPhysicalDevice> enumerate_physical_devices() const;

	void										create_cube_accessors();
	void										init_cube_accessors();

	void										create_device();
	void										create_swapchain();
	void										create_image_views();
	void										create_pipeline(std::string vertex_shader, std::string fragment_shader);
	void										create_framebuffers();
	void										create_command_pool();
	void										create_short_lived_command_pool();
	void										create_command_buffers();
	void										record_command_buffer(const VkCommandBuffer &command_buffer, uint32_t image_idx, uint32_t frame_idx) const;
	void										create_sync_objects();
	void										create_descriptor_pool();
	void										create_depth_img();
	void										create_color_resources();

	void										render(uint32_t frame_idx) const;
	void										waitIdle() const;

	void										mark_framebuffer_resized();
	void										cleanup_swapchain();
	void										recreate_swapchain();

private:
	[[nodiscard]] std::pair<VkImage, VkDeviceMemory> create_image(size_t w, size_t h, uint32_t mipLevels, VkSampleCountFlagBits numSamples, VkFormat format,
																  VkImageTiling tiling, VkImageUsageFlags usage, VkMemoryPropertyFlags props) const;
	[[nodiscard]] std::optional<VkImageView>		 create_image_view(const VkImage &image, VkFormat format, const VkImageAspectFlags &aspectFlags,
																	   uint32_t mipLevels) const;

	[[nodiscard]] VkFormat							 find_supported_format(const std::vector<VkFormat> &candidates, const VkImageTiling &tiling,
																		   const VkFormatFeatureFlags &features) const;

	void transition_image_layout(const VkImage &image, VkFormat format, VkImageLayout oldLayout, VkImageLayout newLayout, uint32_t mipLevels) const;
	void copy_buffer_to_image(const VkBuffer &buffer, const VkImage &image, uint32_t w, uint32_t h) const;
	void generate_mip_maps(const VkImage &img, const VkFormat &format, size_t w, size_t h, uint32_t mipLevels) const;

	[[nodiscard]] VkFormat find_depth_format() const;
	static constexpr bool  has_stencil_component(const VkFormat format) {
		 return format == VK_FORMAT_D32_SFLOAT_S8_UINT || format == VK_FORMAT_D24_UNORM_S8_UINT;
	}

	VkPhysicalDevice			 _physical{};

	VkInstance					 _instance{};
	VkDebugUtilsMessengerEXT	 _debugMessenger{};
	std::shared_ptr<Renderer>	 _renderer;

	std::vector<CubeAccessor>	 _cubeAccessors;

	VkSwapchainKHR				 _swapchain{};
	std::vector<VkImage>		 _swapchainImages;
	std::vector<VkImageView>	 _swapchainImageViews;
	VkExtent2D					 _swapchainExtent{};
	VkFormat					 _swapchainFormat{};

	std::unique_ptr<Pipeline>	 _pipeline{nullptr};
	std::vector<VkFramebuffer>	 _framebuffers;
	bool						 _framebufferResized{false};

	VkCommandPool				 _commandPool{};
	std::vector<VkCommandBuffer> _commandBuffers;

	VkCommandPool				 _shortLivedCommandPool{};

	std::vector<VkSemaphore>	 _imageAvailableSemaphores;
	std::vector<VkSemaphore>	 _renderFinishedSemaphores;
	std::vector<VkFence>		 _inFlightFences;

	VkDescriptorPool			 _descriptorPool{};

	VkDevice					 _device{};

	VkSampleCountFlagBits		 _msaaSamples{VK_SAMPLE_COUNT_1_BIT};
	VkImage						 _colorImg{};
	VkImageView					 _colorImgView{};
	VkDeviceMemory				 _colorImgMemory{};

	VkImage						 _depthImg{};
	VkImageView					 _depthImgView{};
	VkDeviceMemory				 _depthImgMemory{};

	friend class Renderer;
};
} // namespace graphics

#endif // SCOP_VULKAN_H
