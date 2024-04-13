#ifndef SCOP_RENDERER_H
#define SCOP_RENDERER_H

#include "queue_families.h"

#include <GLFW/glfw3.h>
#include <memory>
#include <vulkan/vulkan.h>
#include <glm/glm.hpp>

namespace graphics {
class VulkanInstance;

class Renderer {
public:
							   Renderer(VulkanInstance *instance, GLFWwindow *window);

	void					   cleanup_surface();
	[[nodiscard]] VkSurfaceKHR get_surface() const;

	GLFWwindow				  *getWindow() const;
	void					   render(uint32_t frame_idx) const;

	void init_mvp_matrix();

private:
	void			init_surface();
	void			acquire_queues(const QueueFamilyIndices &indices);

	void			updateUniformBuffers(uint32_t frame_idx) const;

	VulkanInstance *_instance;
	GLFWwindow	   *_window;
	VkSurfaceKHR	_surface;
	VkQueue			_graphics{};
	VkQueue			_present{};

	std::shared_ptr<glm::vec3> translation{};
	std::shared_ptr<glm::quat> rotation{};
	std::shared_ptr<glm::vec3> scale{};
	std::shared_ptr<glm::mat4> view{};
	std::shared_ptr<glm::mat4> proj{};

	friend class VulkanInstance;
};
} // namespace graphics

#endif // SCOP_RENDERER_H
