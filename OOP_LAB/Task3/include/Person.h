#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class Person {
protected:
    string firstName, lastName;
public:
    Person(string f="N/A", string l="N/A");
    void print();
};

#endif
