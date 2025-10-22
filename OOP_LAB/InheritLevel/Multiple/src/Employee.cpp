#include "Employee.h"

Employee::Employee(int id, int s) {
    empID = id;
    salary = s;
}

void Employee::getEmployeeData() {
    cout << "Enter Employee ID: ";
    cin >> empID;
    cout << "Enter Salary: ";
    cin >> salary;
}

void Employee::showEmployeeData() {
    cout << "Employee ID: " << empID << ", Salary: " << salary << endl;
}
