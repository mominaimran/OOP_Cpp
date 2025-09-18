#include "Circle.h"

void Circle::setRadius(double r){
    if(r>0)
        radius = r;
    else
        radius = 0;
}

double Circle::getRadius(){
    return radius;
}

double Circle::area(){
    return 3.14*radius*radius;
}

double Circle::circumference(){
    return 2*3.14*radius;
}

Circle::Circle(double r){
    setRadius(r);
}
