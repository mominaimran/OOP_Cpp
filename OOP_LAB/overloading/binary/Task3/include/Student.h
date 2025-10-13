#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(); // default constructor
    Student(string n, int a);

    // Friend functions for operator overloading
    friend istream& operator >> (istream &in, Student &s);
    friend ostream& operator << (ostream &out, const Student &s); 
};

#endif
