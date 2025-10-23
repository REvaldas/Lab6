cmake_minimum_required(VERSION 3.10)
project(CppJenkinsProject)

set(CMAKE_CXX_STANDARD 11)

# Create library from BankAccount.cpp
add_library(bank_logic src/BankAccount.cpp)

# Application executable
add_executable(main src/main.cpp)
target_link_libraries(main PRIVATE bank_logic)

# Test executable
add_executable(test_main test/test_main.cpp)
target_link_libraries(test_main PRIVATE bank_logic)
