#define GLFW_INCLUDE_VULKAN

#include "graphics/renderer.h"

#include "application.h"
#include "graphics/vulkan.h"

#include <GLFW/glfw3.h>
#include <iostream>
#include <stdexcept>

#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/gtc/matrix_transform.hpp>

namespace graphics {

Renderer::Renderer(VulkanInstance *instance, GLFWwindow *window) : _instance(instance), _window(window), _surface() {
	init_surface();
}

void Renderer::init_surface() {
	if (glfwCreateWindowSurface(static_cast<VkInstance>(*_instance), _window, nullptr, &_surface) != VK_SUCCESS)
		throw std::runtime_error("couldn't create window surface");

	std::cerr << "Window surface created" << std::endl;
}

void Renderer::cleanup_surface() {
	vkDestroySurfaceKHR(static_cast<VkInstance>(*_instance), _surface, nullptr);
	_surface = nullptr;
}

VkSurfaceKHR Renderer::get_surface() const {
	return _surface;
}

GLFWwindow *Renderer::getWindow() const {
	return _window;
}

void Renderer::acquire_queues(const QueueFamilyIndices &indices) {
	if (indices.graphicsFamily)
		vkGetDeviceQueue(_instance->_device, indices.graphicsFamily.value(), 0, &_graphics);

	if (indices.presentFamily)
		vkGetDeviceQueue(_instance->_device, indices.presentFamily.value(), 0, &_present);
}

void Renderer::render(const uint32_t frame_idx) const {
	const VkDevice		  &device				   = _instance->_device;
	const VkCommandBuffer &commandBuffer		   = _instance->_commandBuffers[frame_idx];
	const VkFence		  &inFlightFence		   = _instance->_inFlightFences[frame_idx];
	const VkSemaphore	  &imageAvailableSemaphore = _instance->_imageAvailableSemaphores[frame_idx];
	const VkSemaphore	  &renderFinishedSemaphore = _instance->_renderFinishedSemaphores[frame_idx];

	vkWaitForFences(device, 1, &inFlightFence, VK_TRUE, UINT64_MAX);

	uint32_t img_idx;
	{
		// ReSharper disable once CppTooWideScopeInitStatement
		const VkResult res = vkAcquireNextImageKHR(device, _instance->_swapchain, UINT64_MAX, imageAvailableSemaphore, VK_NULL_HANDLE, &img_idx);

		if (res == VK_ERROR_OUT_OF_DATE_KHR) {
			std::cerr << "SWAPCHAIN INVALID, RECREATING IT" << std::endl;
			_instance->recreate_swapchain();
			return;
		}
		if (res != VK_SUCCESS && res != VK_SUBOPTIMAL_KHR) {
			throw std::runtime_error("couldn't acquire a new image from swapchain");
		}
	}

	vkResetFences(device, 1, &inFlightFence);
	vkResetCommandBuffer(commandBuffer, 0);
	_instance->record_command_buffer(commandBuffer, img_idx, frame_idx);

	updateUniformBuffers(frame_idx);

	const std::array							  waitSemaphore{imageAvailableSemaphore};
	constexpr std::array<VkPipelineStageFlags, 1> waitPipelineStages{VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT};
	const std::array							  signalSemaphore{renderFinishedSemaphore};

	VkSubmitInfo								  submitInfo{};
	submitInfo.sType				= VK_STRUCTURE_TYPE_SUBMIT_INFO;
	submitInfo.waitSemaphoreCount	= waitSemaphore.size();
	submitInfo.pWaitSemaphores		= waitSemaphore.data();
	submitInfo.pWaitDstStageMask	= waitPipelineStages.data();
	submitInfo.commandBufferCount	= 1;
	submitInfo.pCommandBuffers		= &commandBuffer;
	submitInfo.signalSemaphoreCount = signalSemaphore.size();
	submitInfo.pSignalSemaphores	= signalSemaphore.data();

	if (vkQueueSubmit(_graphics, 1, &submitInfo, inFlightFence) != VK_SUCCESS) {
		throw std::runtime_error("couldn't submit graphics queue");
	}

	const std::array swapchains{_instance->_swapchain};
	VkPresentInfoKHR presentInfo{};
	presentInfo.sType			   = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
	presentInfo.waitSemaphoreCount = signalSemaphore.size();
	presentInfo.pWaitSemaphores	   = signalSemaphore.data();
	presentInfo.swapchainCount	   = swapchains.size();
	presentInfo.pSwapchains		   = swapchains.data();
	presentInfo.pImageIndices	   = &img_idx;
	presentInfo.pResults		   = nullptr;


	{
		// ReSharper disable once CppTooWideScopeInitStatement
		const VkResult res = vkQueuePresentKHR(_present, &presentInfo);

		if (res == VK_ERROR_OUT_OF_DATE_KHR || res == VK_SUBOPTIMAL_KHR || _instance->_framebufferResized) {
			std::cerr << "SWAPCHAIN INVALID, RECREATING IT" << std::endl;
			_instance->_framebufferResized = false;
			_instance->recreate_swapchain();
		} else if (res != VK_SUCCESS) {
			throw std::runtime_error("couldn't present the resultant image to screen");
		}
	}
}

void Renderer::init_mvp_matrix() {
	constexpr glm::vec3 eye(-5, 0.0, 5.0f);
	constexpr glm::vec3 center(0.0f, 0.0f, 0.0f);
	constexpr glm::vec3 up(0.0f, 0.0f, 1.0f);

	constexpr float		fov	   = glm::radians(45.0f);

	const float			ratio  = static_cast<float>(_instance->_swapchainExtent.width) / static_cast<float>(_instance->_swapchainExtent.height);

	view					   = std::make_shared<glm::mat4>(lookAt(eye, center, up));
	proj					   = std::make_shared<glm::mat4>(glm::perspective(fov, ratio, 0.1f, 20.f));
	(*proj)[1][1]			  *= -1;

	translation				   = std::make_shared<glm::vec3>(0, 0, 0);
	scale					   = std::make_shared<glm::vec3>(0.5, 0.5, 0.5);

	const glm::quat r1 = angleAxis(glm::radians(45.f), glm::vec3{0., 1., 0.});
	const glm::quat r2 = angleAxis(glm::radians(90.0f), glm::vec3{1., 0., 0.});
	const glm::quat r3 = angleAxis(glm::radians(22.5f), glm::vec3{0., 0., 1.});
	const glm::quat r4 = angleAxis(glm::radians(45.f), glm::vec3{0., 1., 0.});
	rotation				   = std::make_shared<glm::quat>(r1 * r2 * r3 * r4);
}


void Renderer::updateUniformBuffers(const uint32_t frame_idx) const {
	for (const auto &accessor : _instance->_cubeAccessors) {
		accessor.updateUniformBuffer(frame_idx);
	}
}

} // namespace graphics
