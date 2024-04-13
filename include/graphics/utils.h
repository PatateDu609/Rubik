#ifndef SCOP_UTILS_H
#define SCOP_UTILS_H

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/glm.hpp>
#include <vector>

#ifndef IGNORE_VULKAN
#include <vulkan/vulkan_core.h>
#endif

#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/hash.hpp>

namespace graphics {
#ifndef IGNORE_VULKAN

extern const std::vector<const char *> VALIDATION_LAYERS;
extern const std::vector<const char *> DEVICE_EXTENSIONS;


std::vector<const char *>			   get_required_extensions();
bool								   check_validation_layer_support();
bool								   check_device_extension_support(const VkPhysicalDevice &physicalDevice);
VkSampleCountFlagBits				   get_max_usable_sample_count(const VkPhysicalDevice &physical);

std::pair<VkBuffer, VkDeviceMemory>	   create_buffer(const VkDevice &device, const VkPhysicalDevice &physical, VkDeviceSize size, VkBufferUsageFlags usage,
													 VkMemoryPropertyFlags properties);
void copy_buffer(const VkDevice &device, const VkCommandPool &commandPool, const VkQueue &queue, const VkBuffer &src, const VkBuffer &dst, VkDeviceSize size);

VkCommandBuffer begin_single_time_command(const VkDevice &device, const VkCommandPool &commandPool);
void			end_single_time_command(const VkDevice &device, const VkCommandPool &commandPool, const VkCommandBuffer &cmdBuffer, const VkQueue &queue);

uint32_t		find_memory_type(const VkPhysicalDevice &physical, uint32_t type_filter, VkMemoryPropertyFlags properties);

#endif

struct VertexData {
	// VertexData() = default;

	bool operator==(const VertexData &rhs) const {
		return std::tie(position, color) == std::tie(rhs.position, rhs.color);
	}

	bool operator!=(const VertexData &rhs) const {
		return !(*this == rhs);
	}

#ifndef IGNORE_VULKAN
	static VkVertexInputBindingDescription					getBindingDesc();
	static std::array<VkVertexInputAttributeDescription, 2> getAttributeDescs();
#endif

	glm::vec3												position{};
	glm::vec3												color{};
};

struct UniformBufferObject {
	alignas(16) glm::mat4 model{};
	alignas(16) glm::mat4 view{};
	alignas(16) glm::mat4 proj{};
};

} // namespace graphics

template <>
struct std::hash<graphics::VertexData> {
	size_t operator()(const graphics::VertexData &vertex) const noexcept {
		return ((hash<glm::vec3>()(vertex.position) ^ (hash<glm::vec3>()(vertex.color) << 1)) >> 1);
	}
};

#endif // SCOP_UTILS_H
