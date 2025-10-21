#include "Employee.h"

Employee::Employee(string n, int a, int i, int s):Person(n, a){
    empId = i;
    salary = s;
}

void Employee::getData(){
    Person::getData();
    cout << "Enter employee Id: ";
    cin >> empId;
    cout << "Enter salary: ";
    cin >> salary;
}

void Employee::showData(){
    Person::showData();
    cout << "Employee Id: " << empId << ", Salary: " << salary << endl;
}  