#cmake_minimum_required
cmake_minimum_required(VERSION 3.20)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set the project name and version
project(Tutorial VERSION 1.0)

# config header file
configure_file(TutorialConfig.h.in TutorialConfig.h)

# add the executable
add_executable(${PROJECT_NAME} tutorial.cxx)

target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_BINARY_DIR}")
