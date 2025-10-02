#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name; // public member
protected:
    int age; // protected member
private:
    string cnic; // private member

public:
    Person(string n = "Unknown", int a = 0, string c = "00000");
    void displayPerson();
};

#endif
