#include"../includes/vlkg_firstapp.hpp"

#include <iostream>
#include<stdexcept>
int main() {
    Vlkg::FirstApp app{};

    try {
        app.run();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}