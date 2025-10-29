#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
private:
    float gpa;

public:
    Student(float g=0.0);
    float getGPAValue() const { return gpa; }
    void getData();      // no override keyword
    bool isOutstanding(); 
};

#endif
