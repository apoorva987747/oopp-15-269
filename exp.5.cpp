#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;   // Hidden data member

public:
    // Constructor
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        balance = initialBalance;
    }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdrawal function
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    // Display account details
    void display() {
        cout << "\nAccount Holder: " << accountHolder << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("Apoorva", 5000);

    account.deposit(2000);
    account.withdraw(1500);

    account.display();

    return 0;
}