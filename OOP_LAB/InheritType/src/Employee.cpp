#include "Employee.h"

Employee::Employee(string n, int a, string c, int id) 
    : Person(n, a, c) {  // Person constructor call
    empId = id;
}

void Employee::displayEmployee() {
    cout << "Employee ID: " << empId << endl;
    cout << "Accessing Person public member (name): " << name << endl;
    // cout << cnic; ❌ not allowed (private)
    // age is accessible (protected from Person → protected here)
}
