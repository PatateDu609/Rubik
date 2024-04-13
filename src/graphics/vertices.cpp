#include "graphics/vertices.h"

#include "application.h"

#include <iostream>

namespace graphics {

CubeAccessor::CubeAccessor(const size_t idx) : cube{geometry::cubes[idx]}, rotation{1, 0, 0, 0} {
}

CubeAccessor::~CubeAccessor() {
	if (!device)
		return;
	if (vertexBuffer) {
		vkDestroyBuffer(device, vertexBuffer, nullptr);
		vkFreeMemory(device, vertexBufferMemory, nullptr);
	}

	if (indexBuffer) {
		vkDestroyBuffer(device, indexBuffer, nullptr);
		vkFreeMemory(device, indexBufferMemory, nullptr);
	}

	for (size_t i = 0; i < uniformBuffers.size(); i++) {
		if (uniformBuffers[i]) {
			vkDestroyBuffer(device, uniformBuffers[i], nullptr);
			vkFreeMemory(device, uniformBuffersMemory[i], nullptr);
		}
	}
	uniformBuffersMapped.clear();
}


const std::vector<VertexData> &CubeAccessor::vertices() const {
	return cube.vertices;
}

const std::vector<uint32_t> &CubeAccessor::indices() const {
	return cube.indices;
}

void CubeAccessor::use(const VkDescriptorPool &new_pool) {
	descriptorPool = new_pool;
}

void CubeAccessor::use(const VkPhysicalDevice &new_physical) {
	physical = new_physical;
}

void CubeAccessor::use(const VkDevice &new_device) {
	device = new_device;
}

void CubeAccessor::use(const VkCommandPool &new_command_pool) {
	commandPool = new_command_pool;
}

void CubeAccessor::use(const VkDescriptorSetLayout &descriptor_set_layout) {
	descriptorSetLayout = descriptor_set_layout;
}

void CubeAccessor::useTransferQueue(const VkQueue &queue) {
	transferQueue = queue;
}

void CubeAccessor::update_translation(const std::shared_ptr<glm::vec3> &new_translate) {
	translation = new_translate;
}

void CubeAccessor::update_rotation(const std::shared_ptr<glm::quat> &new_rotation) {
	baseRotation = new_rotation;
}

void CubeAccessor::update_scale(const std::shared_ptr<glm::vec3> &new_scale) {
	scale = new_scale;
}

void CubeAccessor::update_view(const std::shared_ptr<glm::mat4> &new_view) {
	view = new_view;
}

void CubeAccessor::update_projection(const std::shared_ptr<glm::mat4> &new_proj) {
	proj = new_proj;
}

void CubeAccessor::init_vertex_buffer() {
	const size_t   size = sizeof(vertices()[0]) * vertices().size();

	VkBuffer	   stagingBuffer;
	VkDeviceMemory stagingMemory;
	{
		constexpr VkBufferUsageFlags	usage	   = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
		constexpr VkMemoryPropertyFlags properties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;

		std::tie(stagingBuffer, stagingMemory)	   = create_buffer(device, physical, size, usage, properties);
		std::cerr << "Created successfully staging buffer and allocated its memory (used for vertex buffer)" << std::endl;

		void *data;
		vkMapMemory(device, stagingMemory, 0, size, 0, &data);
		memcpy(data, vertices().data(), size);
		vkUnmapMemory(device, stagingMemory);
	}

	{
		constexpr VkBufferUsageFlags	usage	   = VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
		constexpr VkMemoryPropertyFlags properties = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
		std::tie(vertexBuffer, vertexBufferMemory) = create_buffer(device, physical, size, usage, properties);
		std::cerr << "Created successfully vertex buffer and allocated its memory" << std::endl;
	}

	copy_buffer(device, commandPool, transferQueue, stagingBuffer, vertexBuffer, size);

	vkDestroyBuffer(device, stagingBuffer, nullptr);
	vkFreeMemory(device, stagingMemory, nullptr);
}

void CubeAccessor::init_index_buffer() {
	const size_t   size = sizeof(indices()[0]) * indices().size();

	VkBuffer	   stagingBuffer;
	VkDeviceMemory stagingMemory;
	{
		constexpr VkBufferUsageFlags	usage	   = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
		constexpr VkMemoryPropertyFlags properties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;

		std::tie(stagingBuffer, stagingMemory)	   = create_buffer(device, physical, size, usage, properties);
		std::cerr << "Created successfully staging buffer and allocated its memory (used for index buffer)" << std::endl;

		void *data;
		vkMapMemory(device, stagingMemory, 0, size, 0, &data);
		memcpy(data, indices().data(), size);
		vkUnmapMemory(device, stagingMemory);
	}

	{
		constexpr VkBufferUsageFlags	usage	   = VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_INDEX_BUFFER_BIT;
		constexpr VkMemoryPropertyFlags properties = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
		std::tie(indexBuffer, indexBufferMemory)   = create_buffer(device, physical, size, usage, properties);
		std::cerr << "Created successfully index buffer and allocated its memory" << std::endl;
	}

	copy_buffer(device, commandPool, transferQueue, stagingBuffer, indexBuffer, size);

	vkDestroyBuffer(device, stagingBuffer, nullptr);
	vkFreeMemory(device, stagingMemory, nullptr);
}

void CubeAccessor::init_uniform_buffers() {
	constexpr VkBufferUsageFlags	usage	   = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;
	constexpr VkMemoryPropertyFlags properties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;

	uniformBuffers.resize(MAX_FRAMES_IN_FLIGHT);
	uniformBuffersMemory.resize(MAX_FRAMES_IN_FLIGHT);
	uniformBuffersMapped.resize(MAX_FRAMES_IN_FLIGHT);

	for (size_t i = 0; i < uniformBuffers.size(); i++) {
		constexpr VkDeviceSize bufferSize					 = sizeof(UniformBufferObject);

		std::tie(uniformBuffers[i], uniformBuffersMemory[i]) = create_buffer(device, physical, bufferSize, usage, properties);
		vkMapMemory(device, uniformBuffersMemory[i], 0, bufferSize, 0, &uniformBuffersMapped[i]);
		std::cerr << "Created successfully uniform buffer " << i << std::endl;
	}
}

void CubeAccessor::init_descriptor_sets() {
	const std::vector			layouts(MAX_FRAMES_IN_FLIGHT, descriptorSetLayout);

	VkDescriptorSetAllocateInfo allocateInfo{};
	allocateInfo.sType				= VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
	allocateInfo.descriptorPool		= descriptorPool;
	allocateInfo.descriptorSetCount = layouts.size();
	allocateInfo.pSetLayouts		= layouts.data();

	descriptorSets.resize(MAX_FRAMES_IN_FLIGHT);
	if (vkAllocateDescriptorSets(device, &allocateInfo, descriptorSets.data()) != VK_SUCCESS) {
		throw std::runtime_error("couldn't allocate descriptor sets for current device");
	}
	std::cerr << "Allocated successfully descriptor sets for current device" << std::endl;

	for (size_t i = 0; i < MAX_FRAMES_IN_FLIGHT; i++) {
		VkDescriptorBufferInfo bufferInfo{};
		bufferInfo.buffer = uniformBuffers[i];
		bufferInfo.offset = 0;
		bufferInfo.range  = VK_WHOLE_SIZE;

		std::array<VkWriteDescriptorSet, 1> writeDescriptors{};
		writeDescriptors[0].sType			 = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
		writeDescriptors[0].dstSet			 = descriptorSets[i];
		writeDescriptors[0].dstBinding		 = 0;
		writeDescriptors[0].dstArrayElement	 = 0;
		writeDescriptors[0].descriptorType	 = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
		writeDescriptors[0].descriptorCount	 = 1;
		writeDescriptors[0].pBufferInfo		 = &bufferInfo;
		writeDescriptors[0].pImageInfo		 = nullptr;
		writeDescriptors[0].pTexelBufferView = nullptr;

		vkUpdateDescriptorSets(device, writeDescriptors.size(), writeDescriptors.data(), 0, nullptr);
		std::cerr << "Updated descriptor set number " << i << std::endl;
	}
}

void CubeAccessor::bind(const VkCommandBuffer &command_buffer, const VkPipelineLayout &pipeline_layout, const uint32_t frame_idx) const {
	const std::array								   buffers{vertexBuffer};
	constexpr std::array<VkDeviceSize, buffers.size()> offsets{0};

	vkCmdBindVertexBuffers(command_buffer, 0, buffers.size(), buffers.data(), offsets.data());
	vkCmdBindIndexBuffer(command_buffer, indexBuffer, 0, VK_INDEX_TYPE_UINT32);
	vkCmdBindDescriptorSets(command_buffer, VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline_layout, 0, 1, &descriptorSets[frame_idx], 0, nullptr);
	vkCmdDrawIndexed(command_buffer, indices().size(), 1, 0, 0, 0);
}

void CubeAccessor::updateUniformBuffer(const uint32_t frame_idx) const {
	UniformBufferObject		 ubo{};
	glm::vec3				 translate_vec;
	glm::quat				 final_rotation = rotation;
	glm::vec3				 scale_vec;

	std::vector<std::string> unset_objs;
	if (!translation) {
		unset_objs.emplace_back("translation");
		translate_vec = {0, 0, 0};
	} else {
		translate_vec = *translation;
	}

	if (!baseRotation) {
		unset_objs.emplace_back("base rotation");
	} else {
		final_rotation = *baseRotation * final_rotation;
	}

	if (!scale) {
		unset_objs.emplace_back("scale");
		scale_vec = {1, 1, 1};
	} else {
		scale_vec = *scale;
	}

	if (!view) {
		unset_objs.emplace_back("view");
		ubo.view = glm::mat4(1);
	} else {
		ubo.view = *view;
	}

	if (!proj) {
		unset_objs.emplace_back("projection");
		ubo.proj = glm::mat4(1);
	} else {
		ubo.proj = *proj;
	}

	if (!unset_objs.empty()) {
		std::cerr << "warning: " << unset_objs[0];
		for (size_t i = 1; i < unset_objs.size(); i++) {
			std::cerr << (i + 1 < unset_objs.size() ? ", " : " and ") << unset_objs[i];
		}
		std::cerr << " are unset, identity values will be used" << std::endl;
	}

	ubo.model = glm::scale(glm::mat4(1), scale_vec);
	ubo.model = mat4_cast(final_rotation) * ubo.model;
	ubo.model = translate(ubo.model, translate_vec);
	memcpy(uniformBuffersMapped[frame_idx], &ubo, sizeof ubo);
}

} // namespace graphics
