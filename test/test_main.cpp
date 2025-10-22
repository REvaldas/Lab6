#include <cassert>
#include "../src/main.cpp"

int main() {
    assert(add(2, 2) == 4);
    assert(add(-1, 1) == 0);
    std::cout << "✅ All tests passed!\n";
    return 0;
}
