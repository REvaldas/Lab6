#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Hello, Jenkins C++!" << std::endl;
    std::cout << "[TEST] add(2,2) = " << add(2,2) << std::endl;
    return 0;
}
