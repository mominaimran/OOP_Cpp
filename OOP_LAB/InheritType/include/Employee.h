#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"

class Employee : public Person {   // 🔹 try changing to protected/private
protected:
    int empId;

public:
    Employee(string n = "Unknown", int a = 0, string c = "00000", int id = 0);
    void displayEmployee();
};

#endif
