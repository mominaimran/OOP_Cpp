#include <iostream>
#include "ActiveUser.h"
using namespace std;

int main() {
    ActiveUser u1("Momina");
    ActiveUser u2("Laiba");

    cout << "Currently active: " << ActiveUser::showActiveUsers() << endl;

    {
        ActiveUser u3("Charlie");
        cout << "Currently active: " << ActiveUser::showActiveUsers() << endl;
    } // Charlie logs out automatically when scope ends

    cout << "Currently active: " << ActiveUser::showActiveUsers() << endl;

    return 0;
}