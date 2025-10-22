#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee {
protected:
    int empID;
    int salary;
public:
    Employee(int id = 0, int s = 0);
    void getEmployeeData();
    void showEmployeeData();
};

#endif
