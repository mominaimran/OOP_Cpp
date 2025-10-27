#ifndef UNARYOPERATORS_H
#define UNARYOPERATORS_H
#include <iostream>
using namespace std;

class UnaryOperators{
    private:
        int value;
    public:
        UnaryOperators(int v = 0);
        void input();
        void display() const;
        UnaryOperators operator++();
};

#endif