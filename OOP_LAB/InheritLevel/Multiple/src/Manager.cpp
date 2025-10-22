#include "Manager.h"

Manager::Manager(string d) {
    department = d;
}

void Manager::getData() {
    getEmployeeData();
    getStudentData();
    cout << "Enter Department: ";
    cin >> department;
}

void Manager::showData() {
    cout << "\n--- Manager Details ---" << endl;
    showEmployeeData();
    showStudentData();
    cout << "Department: " << department << endl;
}
