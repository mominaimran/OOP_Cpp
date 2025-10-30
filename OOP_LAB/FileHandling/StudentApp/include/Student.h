#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student{
    private:
        int rollNo;
        float gpa;
    public:
        Student(int r=0, float g=0);
        void input();
        void display() const;

        // Getters for file handling (used in main.cpp)
        int getRollNo() const;
        float getGpa() const;

        // Setters for reading data from file
        void setData(int r, float g);
};

#endif