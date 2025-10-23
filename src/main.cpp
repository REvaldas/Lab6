#include <iostream>

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance = 0.0) : balance(initialBalance) {}

    double getBalance() const { return balance; }

    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            return true;
        }
        return false;
    }
};

int main() {
    BankAccount account(100.0); // starting balance
    std::cout << "Initial Balance: $" << account.getBalance() << "\n";

    account.deposit(50);
    std::cout << "After depositing $50: $" << account.getBalance() << "\n";

    if (account.withdraw(30)) {
        std::cout << "After withdrawing $30: $" << account.getBalance() << "\n";
    } else {
        std::cout << "Withdrawal of $30 failed\n";
    }

    if (!account.withdraw(200)) {
        std::cout << "Attempt to withdraw $200 failed (insufficient funds)\n";
    }

    return 0;
}
