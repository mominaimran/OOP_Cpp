#pragma once
#include <string>

class BankAccount {
private:
    std::string name;
    double balance;

public:
    BankAccount(std::string n, double b);
    void deposit(double amount);
    void withdraw(double amount);
    void display();
};
