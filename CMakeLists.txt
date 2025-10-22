cmake_minimum_required(VERSION 3.0)
project(CppJenkinsProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)

# Source files
set(SRC_FILES src/main.cpp)
add_executable(main ${SRC_FILES})

# Test executable
set(TEST_FILES test/test_main.cpp src/main.cpp)
add_executable(test_main ${TEST_FILES})
