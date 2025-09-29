#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
using namespace std;

class Circle {
protected:
    double radius;
public:
    Circle(double r = 0);
    void print();
    double area();
};

#endif
