#ifndef SURGEON_H
#define SURGEON_H
#include "Doctor.h"
#include <string>
using namespace std;

class Surgeon : public Doctor
{
protected:
    string spec;
    int salary;

public:
    Surgeon(string n = "N/A", int a = 0, string s = "unknown", int sal = 0);
    
    friend istream &operator>>(istream &in, Surgeon &s);
    friend ostream &operator<<(ostream &out, const Surgeon &s);
};

#endif