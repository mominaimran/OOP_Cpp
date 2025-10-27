#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
using namespace std;

class Array{
    private:
        int num[5];  //fixed size array
    public:
        Array();     // constructor to initialize elements
        int& operator[](int index);   // overload [] for access
        void display();    // to print all elements
};

#endif