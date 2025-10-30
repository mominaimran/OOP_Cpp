#ifndef DOCTOR_H
#define DOCTOR_H

#include <iostream>
using namespace std;

class Doctor {
protected:
    string name;
    int age;
public:
    Doctor(string n = "Unknown", int a = 0);
    void showDoctorInfo() const;
};

#endif
