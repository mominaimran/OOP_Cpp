#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
using namespace std;

class Person{
    protected:
        string name;
        int age;
    public:
        Person(string n = "N/A", int a = 0);
        void getData();
        void showData();
};

#endif