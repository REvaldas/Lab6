cmake_minimum_required(VERSION 3.10)
project(CppJenkinsProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Application executable (main program)
add_executable(main src/main.cpp)

# Library with the core logic (so tests can reuse it)
add_library(bank_logic src/BankAccount.cpp)  # Assuming you can move class code here

# Test executable (link to the logic library)
add_executable(test_main test/test_main.cpp)
target_link_libraries(test_main PRIVATE bank_logic)
