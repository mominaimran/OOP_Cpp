#include "Cylinder.h"

Cylinder::Cylinder(double r, double h) : Circle(r) {
    height = h;
}

void Cylinder::print() {
    cout << "Cylinder radius: " << radius << endl;
    cout << "Height: " << height << endl;
    cout << "Volume: " << volume() << endl;
}

double Cylinder::volume() {
    return area() * height;
}
