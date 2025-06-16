#include"../includes/vlkg_firstapp.hpp"


namespace Vlkg {
	void FirstApp::run() {
		while (!window.shouldClose()) {
			glfwPollEvents();
		}
	}
}