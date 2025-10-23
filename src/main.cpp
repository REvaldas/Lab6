#include <iostream>
#include "BankAccount.h"

int main() {
    BankAccount acc(100);
    acc.deposit(50);
    std::cout << "Balance: " << acc.getBalance() << std::endl;
    return 0;
}
