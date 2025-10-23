#include <cassert>
#include "../src/main.cpp"
#include <iostream>

int main() {
    BankAccount account(100.0);

    // Test deposit
    account.deposit(50);
    assert(account.getBalance() == 150);

    // Test withdraw success
    bool success = account.withdraw(70);
    assert(success);
    assert(account.getBalance() == 80);

    // Test withdraw failure
    success = account.withdraw(200);
    assert(!success);
    assert(account.getBalance() == 80);

    std::cout << "✅ All bank account tests passed!\n";
    return 0;
}
