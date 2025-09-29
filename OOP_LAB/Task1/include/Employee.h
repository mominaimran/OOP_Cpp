#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"
#include <string>
using namespace std;

class Employee : public Person {
    protected:
    int employeeID;
    int salary;
    public:
    Employee();
    Employee(string fn,string ln, int i, int s);
    void print();
};

#endif