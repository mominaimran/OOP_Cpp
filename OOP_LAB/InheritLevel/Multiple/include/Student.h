#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student {
protected:
    int rollNo;
    float cgpa;
public:
    Student(int r = 0, float c = 0.0);
    void getStudentData();
    void showStudentData();
};

#endif
