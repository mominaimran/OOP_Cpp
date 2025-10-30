#include <iostream>
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include "Sphere.h"
#include "Cube.h"
#include "Tetrahedron.h"
using namespace std;

int main() {
    int type, shapeChoice;
    string color;

    cout << "Select Shape Type:\n";
    cout << "1. Two Dimensional\n";
    cout << "2. Three Dimensional\n";
    cout << "Enter your choice: ";
    cin >> type;

    if (type == 1) {
        cout << "\nSelect a 2D Shape:\n";
        cout << "1. Circle\n2. Square\n3. Triangle\n";
        cout << "Enter your choice: ";
        cin >> shapeChoice;

        cout << "Enter color: ";
        cin >> color;

        if (shapeChoice == 1) {
            Circle c;
            c.setColor(color);
            c.showType();
            c.draw();
        }
        else if (shapeChoice == 2) {
            Square s;
            s.setColor(color);
            s.showType();
            s.draw();
        }
        else if (shapeChoice == 3) {
            Triangle t;
            t.setColor(color);
            t.showType();
            t.draw();
        }
        else cout << "Invalid Shape!\n";
    }
    else if (type == 2) {
        cout << "\nSelect a 3D Shape:\n";
        cout << "1. Sphere\n2. Cube\n3. Tetrahedron\n";
        cout << "Enter your choice: ";
        cin >> shapeChoice;

        cout << "Enter color: ";
        cin >> color;

        if (shapeChoice == 1) {
            Sphere s;
            s.setColor(color);
            s.showType();
            s.draw();
        }
        else if (shapeChoice == 2) {
            Cube c;
            c.setColor(color);
            c.showType();
            c.draw();
        }
        else if (shapeChoice == 3) {
            Tetrahedron t;
            t.setColor(color);
            t.showType();
            t.draw();
        }
        else cout << "Invalid Shape!\n";
    }
    else {
        cout << "Invalid Type!\n";
    }

    return 0;
}
