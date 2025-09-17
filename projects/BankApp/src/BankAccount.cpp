#include "BankAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount(string n, double b) {
    name = n;
    balance = b;
}

void BankAccount::deposit(double amount) {
    balance += amount;
    cout << "Deposited: " << amount << endl;
}

void BankAccount::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
        cout << "Withdrawn: " << amount << endl;
    } else {
        cout << "Insufficient funds!" << endl;
    }
}

void BankAccount::display() {
    cout << "Account Holder: " << name 
         << ", Balance: " << balance << endl;
}
