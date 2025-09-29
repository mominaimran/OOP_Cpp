#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person{
    protected:
        string firstName;
        string lastName;
    public:
        Person();
        Person(string fn, string ln);
        void print();
};

#endif