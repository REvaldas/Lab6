#include <iostream>
#include <cassert>
#include "../src/main.cpp"

int main() {
    // Example test: 2+2 = 4
    assert(2 + 2 == 4);
    std::cout << "✅ Test passed!\n";
    return 0;
}
