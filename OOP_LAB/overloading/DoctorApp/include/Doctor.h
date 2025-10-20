#ifndef DOCTOR_H
#define DOCTOR_H
#include <string>
using namespace std;

class Doctor{
    protected:
        string name;
        int age;
    public:
        Doctor(string n="N/A", int a=0);

        friend istream& operator>>(istream& in, Doctor& d);
        friend ostream& operator<<(ostream& out, const Doctor& d);
};

#endif