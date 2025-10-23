#include <cassert>
#include <iostream>
#include "../src/BankAccount.h"

int main() {
    BankAccount account(100.0);

    account.deposit(50);
    assert(account.getBalance() == 150);

    bool success = account.withdraw(70);
    assert(success);
    assert(account.getBalance() == 80);

    success = account.withdraw(200);
    assert(!success);
    assert(account.getBalance() == 80);

    std::cout << "✅ All bank account tests passed!\n";
    return 0;
}
