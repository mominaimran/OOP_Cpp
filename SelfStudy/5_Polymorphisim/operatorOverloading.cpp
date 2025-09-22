#include <iostream>
using namespace std;

class Complex{
    private:
        int real, imag;
    public:
        Complex(int r=0, int i=0){
            real=r;
            imag=i;
        }
        //operator overloading for +
        Complex operator+(const Complex& other){
            Complex temp;
            temp.real = real + other.real;
            temp.imag = imag + other.imag;
            return temp;
        }
        
        void display(){
            cout << real << " + " << imag << "i" << endl;
        }
};

int main() {
    Complex c1(2, 4), c2(3, 1);
    Complex c3 = c1 + c2; // calls operator+()
    c3.display();

    return 0;
}

// What: Operator overloading = custom behavior for operators on objects.
// Why: Readability, natural usage, logical design.
// When: Jab tumhari class ek mathematical/logical entity represent kare.
// How: Special function with operator keyword likhna hota hai.