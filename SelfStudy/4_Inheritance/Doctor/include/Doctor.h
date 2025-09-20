#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>
#include <iostream>
using namespace std;

class Doctor{
    protected:
        string name;
        int salary;
    public:
        Doctor(string n = "unknown", int s = 0);
        void setDoctor(string n, int s);
        void displayDoctor() const;
};

#endif