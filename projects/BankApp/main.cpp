#include "BankAccount.h"
using namespace std;

int main() {
    BankAccount acc1("Momina", 5000);

    acc1.display();
    acc1.deposit(2000);
    acc1.withdraw(1000);
    acc1.display();

    return 0;
}
