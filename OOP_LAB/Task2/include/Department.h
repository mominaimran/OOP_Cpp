#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include "Teacher.h"
using namespace std;

class Department {
private:
    string deptName;
    Teacher teacher; // just one teacher
public:
    Department();
    Department(string name, Teacher t);
    void display();
};

#endif
