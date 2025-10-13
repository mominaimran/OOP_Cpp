#ifndef BOX_H
#define BOX_H

#include <iostream>
using namespace std;

class Box{
    private:
        int length;
    public:
        Box(int l);
        friend void printLength(Box b);
};

#endif