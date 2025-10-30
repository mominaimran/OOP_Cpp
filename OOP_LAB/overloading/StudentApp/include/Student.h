#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        string name;
        int GPA;
        int arr[5];
    public:
        Student(string n = "N/A", int g=0);

        friend istream& operator>>(istream &in, Student &s);
        friend ostream& operator<<(ostream &out, Student &s);

        int& operator[](int index);
};

#endif 