cmake_minimum_required(VERSION 3.20)

# set the project name and version
project(Tutorial VERSION 1.0)

# set c++ standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

option(USE_MYMATH "Use the tutorial provided math implementation" ON)

# configure a header file to pass some of the CMake settings
# to the source code
# .h.in file is a file that can be automatically compiled, you can get .h file by the following command.
#   j jc 2 2 2 ou::
configure_file(
        "TutorialConfig.h.in"
        "${PROJECT_BINARY_DIR}/TutorialConfig.h"
)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")

if (USE_MYMATH)
    # add the MathFunctions library
    add_subdirectory(MathFunctions)
    list(APPEND EXTRA_LIBS MathFunctions)
    list(APPEND EXTRA_INCLUDES "MathFunctions")
endif ()


# add the executable
add_executable(${PROJECT_NAME} tutorial.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC ${EXTRA_LIBS})

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(
        ${PROJECT_NAME} PUBLIC
        "${PROJECT_BINARY_DIR}"
        ${EXTRA_INCLUDES}
)