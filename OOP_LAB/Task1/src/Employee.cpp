#include "Person.h"
#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee():Person(){
    employeeID = 0;
    salary = 0;
}
Employee::Employee(string fn, string ln, int i, int s):Person(fn, ln){
    employeeID = i;
    salary = s;
}
void Employee::print(){
    Person::print();
    cout << "Employee Id: " << employeeID << endl;
    cout << "Salary: " << salary << endl;
}