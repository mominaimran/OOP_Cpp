#include "Person.h"
#include "Student.h"
#include "Professor.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    Person *persPtr[100]; // array of base class pointers
    int n = 0;
    char choice;

    do
    {
        cout << "Enter student or professor (s/p): ";
        cin >> choice;

        if (choice == 's' || choice == 'S')
        {
            persPtr[n] = new Student;
            persPtr[n]->getData();

            // open student file and write data
            ofstream outFile("Student.txt", ios::app);
            outFile << "Name: " << persPtr[n]->getNameValue() << endl;
            outFile << "Name: " << ((Student *)persPtr[n])->getGPAValue() << endl;
            outFile << "--------------------" << endl;
            outFile.close();
        }
        else
        {
            persPtr[n] = new Professor;
            persPtr[n]->getData();

            // open professor file and write data
            ofstream outFile("professors.txt", ios::app);
            outFile << "Name: " << persPtr[n]->getNameValue() << endl;
            outFile << "Publications: " << ((Professor *)persPtr[n])->getNumPubsValue() << endl;
            outFile << "----------------------" << endl;
            outFile.close();
        }
        n++;
        cout << "Enter another (y/n)? ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\n===== PERSON LIST =====\n";
    for (int j = 0; j < n; j++)
    {
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
