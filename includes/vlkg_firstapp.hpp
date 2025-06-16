#pragma once
#include"../includes/vlkg_window.hpp"
#include"../includes/vlkg_pipeline.hpp"

namespace Vlkg {
	class FirstApp {

	public:
		int WIDTH = 800;
		int HEIGHT = 600;

		void run();
	private:
		Window window{WIDTH,HEIGHT,"hello vulkan"};
		VlkgDevice vlkgDevice{ window };
		Pipeline pipeline{vlkgDevice, "../../../shaders/vertex.vert.spv", "../../../shaders/fragment.frag.spv",Pipeline::defaultPipelineConfigInfo(WIDTH,HEIGHT)};
	};
}  