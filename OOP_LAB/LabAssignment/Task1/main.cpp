// ========================================================
// Name: Momina Imran
// Roll No: 005889/BSCS/F24
// Section: B
// Course: Object Oriented Programming (CS_212)
// Lab Assignment #1 - Operator Overloading
// ========================================================
#include "./include/Complex.h"

int main() {
    Complex c1, c2, result;
    
    cout << "===== Task 1: Complex Number Addition =====" << endl;
    cout << "Enter first complex number: " << endl;
    c1.getData();
    cout << "Enter second complex number: " << endl;
    c2.getData();

    result = c1 + c2; // Operator overloading in action

    cout << "------Output-------" << endl;
    cout << "First Complex Number: ";
    c1.showData();
    cout << endl;

    cout << "Second Complex Number: ";
    c2.showData();
    cout << endl;

    cout << "Sum = ";
    result.showData();
    cout << endl;

    return 0;
}
