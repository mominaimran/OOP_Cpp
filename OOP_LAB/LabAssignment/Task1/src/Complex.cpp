#include "../include/Complex.h"

Complex::Complex(float r, float i):real(r), imag(i){}

void Complex::getData() {
    cout << "Enter real part: ";
    cin >> real;
    cout << "Enter imaginary part: ";
    cin >> imag;
}
void Complex::showData() const {
    cout << real << " + " << imag << "i";
}
Complex Complex::operator+(Complex c2){
    Complex temp;
    temp.real = real + c2.real;
    temp.imag = imag + c2.imag;
    return temp;
}
