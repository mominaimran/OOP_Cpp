#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person{
    protected:
        string name;
    public:
        string getNameValue() const { return name; }

        void getName();
        void putName();

        virtual void getData()=0;
        virtual bool isOutstanding()=0;

        virtual ~Person();
};

#endif