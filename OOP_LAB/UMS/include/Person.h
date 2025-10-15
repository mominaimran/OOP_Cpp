#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person{
    protected:
        string name;
        int age;
        int CNIC;
    public:
    Person();
    Person(string n, int a, int c);
    void setPerson(string n, int a, int c);
    void showPerson()const;
};

#endif