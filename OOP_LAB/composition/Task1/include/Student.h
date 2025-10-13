#ifndef STUDENT_H
#define STUDENT_H

#include "Result.h"
#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        string name;
        int regNo;
        Result result;
    public:
        Student(string n="N/A", int r=0, double c=0.0, char g='F');
        Student(string n, int r, Result res);
        void displayStudent();
};

#endif