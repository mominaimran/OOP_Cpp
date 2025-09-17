#include "Teacher.h"
#include <iostream>
#include <iomanip>
using namespace std;

Teacher::Teacher()
{
    name = "unknown";
    empId = "N/A";
    experience = 0;
    salary = 0.0;
}

void Teacher::inputDets()
{
    cout << "Enter Teacher Name: ";
    getline(cin, name);

    cout << "Enter Employee Id: ";
    getline(cin, empId);

    cout << "Enter Years of Experience: ";
    cin >> experience;

    cout << "Enter Salary: ";
    cin >> salary;

    cin.ignore();
}

void Teacher::displayDets()
{
    cout << "\n===== Teacher Profile =====\n";
    cout << "Name        : " << name << endl;
    cout << "Employee ID : " << empId << endl;
    cout << "Experience  : " << experience << " years" << endl;
    cout << "Salary      : Rs. " << fixed << setprecision(2) << salary << endl;
    cout << "===========================\n";
}
