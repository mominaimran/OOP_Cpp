#include <iostream>
using namespace std;

// Static data member = Ek copy for entire class (shared memory).
// Static function = Class-level function jo sirf static members ko access kare.

class Customer
{
    string name;
    int accNumber, balance;
    static int totalCustomer;
    static int totalBalance;

public:
    Customer(string name, int accNumber, int balance)
    {
        this->name = name;
        this->accNumber = accNumber;
        this->balance = balance;
        totalCustomer++;
        totalBalance += balance;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            totalBalance += amount;
        }
    }

    void withDraw(int amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance -= amount;
            totalBalance -= amount;
        }
        else
        {
            cout << "Withdrawal failed! Insufficient balance." << endl;
        }
    }

    void display()
    {
        cout << "Name: " << name << " - Account Number: " << accNumber << " - balance: " << balance << " - total customers: " << totalCustomer << endl;
    }

    static void displayTotalCustomer()
    {
        cout << "Total Customers: " << totalCustomer << endl;
        cout << "Total Balance: " << totalBalance << endl;
    }
};

int Customer::totalCustomer = 0;
int Customer::totalBalance = 0;

int main()
{
    Customer c1("momina", 123, 1000);
    Customer c2("Zoon", 456, 2000);
    c1.display();
    c2.display();
    c1.withDraw(500);
    Customer::displayTotalCustomer();

    return 0;
}