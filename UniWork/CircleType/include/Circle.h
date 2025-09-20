#pragma once
#include <string>
using namespace std;

class Circle{
    private:
        double radius;
    public:
        void setRadius(double r);
        double getRadius();
        double area();
        double circumference();
        Circle(double r=0);
};