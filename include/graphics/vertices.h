#ifndef VERTICES_H
#define VERTICES_H

#include "geometry.h"

#include <glm/gtc/quaternion.hpp>
#include <vulkan/vulkan.h>

namespace graphics {

class CubeAccessor {
public:
	explicit CubeAccessor(size_t idx);
	~		 CubeAccessor();

private:
	const geometry::Cube &cube;

public:
	void										 init_vertex_buffer();
	void										 init_index_buffer();
	void										 init_uniform_buffers();
	void										 init_descriptor_sets();
	void										 bind(const VkCommandBuffer &command_buffer, const VkPipelineLayout &pipeline_layout, uint32_t frame_idx) const;

	void										 use(const VkDescriptorPool &new_pool);
	void										 use(const VkDevice &new_device);
	void										 use(const VkPhysicalDevice &new_physical);
	void										 use(const VkCommandPool &new_command_pool);
	void										 use(const VkDescriptorSetLayout &descriptor_set_layout);
	void										 useTransferQueue(const VkQueue &queue);


	void										 update_translation(const std::shared_ptr<glm::vec3> &new_translate);
	void										 update_rotation(const std::shared_ptr<glm::quat> &new_rotation);
	void										 update_scale(const std::shared_ptr<glm::vec3> &new_scale);
	void										 update_view(const std::shared_ptr<glm::mat4> &new_view);
	void										 update_projection(const std::shared_ptr<glm::mat4> &new_proj);

	[[nodiscard]] const std::vector<VertexData> &vertices() const;
	[[nodiscard]] const std::vector<uint32_t>	&indices() const;

	void										 updateUniformBuffer(uint32_t frame_idx) const;

private:
	VkDevice					 device{};
	VkPhysicalDevice			 physical{};
	VkCommandPool				 commandPool{};
	VkDescriptorSetLayout		 descriptorSetLayout{};
	VkQueue						 transferQueue{};

	// DescriptorSets
	VkDescriptorPool			 descriptorPool{};
	std::vector<VkDescriptorSet> descriptorSets;

	// Uniform buffers
	std::vector<VkBuffer>		 uniformBuffers;
	std::vector<VkDeviceMemory>	 uniformBuffersMemory;
	std::vector<void *>			 uniformBuffersMapped;

	std::shared_ptr<glm::vec3>	 translation;
	std::shared_ptr<glm::quat>	 baseRotation;
	glm::quat					 rotation;
	std::shared_ptr<glm::vec3>	 scale;
	std::shared_ptr<glm::mat4>	 view;
	std::shared_ptr<glm::mat4>	 proj;

	// Index buffer
	VkBuffer					 indexBuffer{};
	VkDeviceMemory				 indexBufferMemory{};

	// Vertex buffer
	VkBuffer					 vertexBuffer{};
	VkDeviceMemory				 vertexBufferMemory{};
};

} // namespace graphics

#endif // VERTICES_H
