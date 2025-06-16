#pragma once 

#define GLFW_INCLUDE_VULKAN
#include<GLFW/glfw3.h>
#include<string>

namespace Vlkg {
	class Window {
	private:
		int windowWidth;
		int windowHeight;
		std::string windowName;
		GLFWwindow* window;

		void initWindow();

	public:
		Window(int width, int height, std::string name);
		~Window();

		Window(const Window&) = delete; //copy constructor
		Window& operator=(const Window&) = delete; //copy assignment operator

		bool shouldClose() { return glfwWindowShouldClose(window); }

		void createWindowSurface(VkInstance instance, VkSurfaceKHR* surface);
	};
}