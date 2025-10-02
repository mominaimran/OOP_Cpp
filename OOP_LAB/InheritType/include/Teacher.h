#ifndef TEACHER_H
#define TEACHER_H

#include "Employee.h"

class Teacher : public Employee {   // 🔹 try protected/private as well
private:
    string subject;

public:
    Teacher(string n, int a, string c, int id, string sub);
    void displayTeacher();
};

#endif
