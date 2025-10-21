#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"

class Employee : public Person{
    protected:
        int empId;
        int salary;
    public:
        Employee(string n = "N/A", int a = 0, int i = 0, int s = 0);
        void getData();
        void showData();
};

#endif