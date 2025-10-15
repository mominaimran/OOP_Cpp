#ifndef TEACHER_H
#define TEACHER_H
#include "Person.h"

class Teacher : public Person{
    private:
        string subject;
        int salary;
    public:
    Teacher();
    Teacher(string n, int a, int c, string sub, int sal);
    void setTeacher(string n, int a, int c, string sub, int sal);
    void showDetails()const;
};

#endif