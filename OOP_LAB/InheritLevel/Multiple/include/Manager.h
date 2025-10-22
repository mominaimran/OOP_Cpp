#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"
#include "Student.h"
#include <string>
using namespace std;

class Manager : public Employee, public Student {
    string department;
public:
    Manager(string d = "N/A");
    void getData();
    void showData();
};

#endif
