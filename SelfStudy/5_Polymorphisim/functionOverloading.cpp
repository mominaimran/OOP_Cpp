#include <iostream>
using namespace std;

class Calculator{
    public:
    int add(int a, int b){
        return a+b;
    }
    double add(double a, double b){
        return a+b;
    }
    int add(int a, int b, int c){
        return a+b+c;
    }
};

int main() {
    Calculator c1;
    cout << c1.add(2, 2) << endl;
    cout << c1.add(2.5, 2.5) << endl;
    cout << c1.add(2, 2, 2) << endl;

    return 0;
}

// Key Points (OOP mein function overloading)
//-> Overloaded functions ek hi class me ho sakte hain.
//-> Different parameter list hona zaroori hai.
//-> Objects ke through call karne par compiler khud decide karega konsi version call hoga.