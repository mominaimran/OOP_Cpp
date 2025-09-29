#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include "Date.h"

class Student : public Person {
private:
    Date dob;  
public:
    Student(string f, string l, int d, int m, int y);
    void print();
};

#endif
