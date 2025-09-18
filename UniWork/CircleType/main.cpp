#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
    Circle c1(5);
    Circle c2;

    double radius;

    cout << "Circle 1 - radius:" << c1.getRadius() << " area: " << c1.area() << " circumference: " << c1.circumference() << endl; 
    cout << "Circle 2 - radius:" << c2.getRadius() << " area: " << c2.area() << " circumference: " << c2.circumference() << endl; 

    cout << "Enter Radius: ";
    cin >> radius;

    c2.setRadius(radius);
    cout << "C2 after setting radius: " << endl;
    cout << "Circle 2 - radius:" << c2.getRadius() << " area: " << c2.area() << " circumference: " << c2.circumference() << endl; 

    return 0;
}