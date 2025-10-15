#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student : public Person{
    private:
        int regNo;
        int CGPA;
    public:
    Student();
    Student(string n, int a, int c, int r, int cg);
    void setStudent(string n, int a, int c, int r, int cg);
    void showDetails()const;
};

#endif