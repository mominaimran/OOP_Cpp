#include "Circle.h"

Circle::Circle(double r) {
    radius = r;
}

void Circle::print() {
    cout << "Circle radius: " << radius << endl;
    cout << "Area: " << area() << endl;
}

double Circle::area() {
    return 3.1416 * radius * radius;
}
