#ifndef CYLINDER_H
#define CYLINDER_H
#include "Circle.h"

class Cylinder : public Circle {
private:
    double height;
public:
    Cylinder(double r = 0, double h = 0);
    void print();
    double volume();
};

#endif
