#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
private:
    float gpa;

public:
    void getData();      // no override keyword
    bool isOutstanding(); 
};

#endif
