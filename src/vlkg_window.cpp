#include"../includes/vlkg_window.hpp"
#include<stdexcept>

namespace Vlkg {
	Window::Window(int width, int height, std::string name) :windowWidth{ width }, windowHeight{ height }, windowName{ name } {
		initWindow();
	}

	Window::~Window() {
		glfwDestroyWindow(window);

		glfwTerminate();
	}

	void Window::initWindow() {
		glfwInit();

		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
		window = glfwCreateWindow(windowWidth, windowHeight, windowName.c_str(), nullptr, nullptr);
	}

	void Window::createWindowSurface(VkInstance instance, VkSurfaceKHR* surface) {
		if (glfwCreateWindowSurface(instance, window, nullptr, surface) != VK_SUCCESS) {
			throw std::runtime_error("failed to create window surface");
		}
	}
}