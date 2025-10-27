#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;
public:
    Complex(float r = 0, float i = 0);     // Constructor
    void getData();                        // Input function
    void showData() const;                 // Display function
    // Operator overloading for addition
    Complex operator+(Complex c2);
};

#endif

