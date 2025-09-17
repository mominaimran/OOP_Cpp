#ifndef TEACHER_H
#define TEACHER_H

#include <string>
using namespace std;

class Teacher{
    private: 
    string name;
    string empId;
    int experience;
    double salary;

    public:
    Teacher(); //constructor

    void inputDets();
    void displayDets();
};

#endif