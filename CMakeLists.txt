cmake_minimum_required(VERSION 3.21)

if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
    set(CMAKE_TOOLCHAIN_FILE "C:/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "")
endif()

project("VulkanProject")

# Find packages
find_package(Vulkan REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)

# Add executable
add_executable(VulkanProject  "src/main.cpp" "src/vlkg_window.cpp" "src/vlkg_firstapp.cpp" "src/vlkg_pipeline.cpp" "src/vlkg_device.cpp")

# Link libraries
target_link_libraries(${PROJECT_NAME}
    PRIVATE
        glfw
        Vulkan::Vulkan
        glm::glm
)