#include "Person.h"
#include "Student.h"
#include "Professor.h"
#include <iostream>
using namespace std;

int main() {
    Person* persPtr[100];  // array of base class pointers
    int n = 0;
    char choice;

    do {
        cout << "Enter student or professor (s/p): ";
        cin >> choice;

        if (choice == 's' || choice == 'S')
            persPtr[n] = new Student;
        else
            persPtr[n] = new Professor;

        persPtr[n++]->getData();

        cout << "Enter another (y/n)? ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\n===== PERSON LIST =====\n";
    for (int j = 0; j < n; j++) {
        persPtr[j]->putName();

        if (persPtr[j]->isOutstanding())
            cout << "This person is outstanding!\n";
        else
            cout << "This person is not outstanding.\n";

        cout << "----------------------\n";
    }

    // Free memory
    for (int j = 0; j < n; j++)
        delete persPtr[j];

    return 0;
}
