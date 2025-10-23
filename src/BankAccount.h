#pragma once

class BankAccount {
private:
    double balance;
public:
    BankAccount(double initialBalance);
    void deposit(double amount);
    bool withdraw(double amount);
    double getBalance() const;
};
