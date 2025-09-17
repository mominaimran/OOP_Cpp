//main.cpp file
#include <iostream>
#include "Patient.h"

using namespace std;

int main() {
    Patient p1,p2("1", "Momina", 20, 50, "B+", "flu");
    cout << "Default constructor is called" << endl;
    p1.displayDets();
    cout << "parameterized constructor is called" << endl;
    p2.displayDets();

    // cout << "--- Enter Patient Details ---\n";
    // //getting patient information
    // p1.getDets();

    // //displaying patient information
    // p1.displayDets();

    return 0;
}
