#pragma once
#include <string>
#include <iostream>

using namespace std;

class Name{
    private:
        string firstName;
        string lastName;
    public:
        void print();
        void setName(string, string);
        string getFirstName();
        string getLastName();
        Name(string first="", string last="");
};