#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include "Department.h"
using namespace std;

class University {
private:
    string uniName;
    Department department; 
public:
    University();
    University(string name, Department d);
    void display();
};

#endif
