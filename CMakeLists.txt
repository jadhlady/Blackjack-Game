cmake_minimum_required(VERSION 3.15)
project(LearningGameDev)

## If you want to link SFML statically
# set(SFML_STATIC_LIBRARIES TRUE)

set(SFML_DIR "<sfml root prefix>/lib/cmake/SFML")

find_package(SFML 2.5 COMPONENTS window graphics network audio REQUIRED)
add_executable(LearningGameDev main.cpp menu.cpp menu.h CardGenerator.cpp CardGenerator.h options.cpp options.h)
target_link_libraries(LearningGameDev sfml-graphics sfml-audio sfml-window sfml-network)
set(CMAKE_CXX_STANDARD 17)
