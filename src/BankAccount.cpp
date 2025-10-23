#include "BankAccount.h"

BankAccount::BankAccount(double initialBalance) : balance(initialBalance) {}

void BankAccount::deposit(double amount) { balance += amount; }

bool BankAccount::withdraw(double amount) {
    if (amount > balance) return false;
    balance -= amount;
    return true;
}

double BankAccount::getBalance() const { return balance; }
