#include <iostream>
using namespace std;

class Car{
    public:
    string brand;
    int price;

    void display(){
        cout << "Car Brand: " << brand << " | price: " << price << endl;
    }

    //parameterized constructor
    Car(string brand, int price){ // parameter names same as member names
        this->brand = brand;      // this->brand refers to the member
        this->price = price;
        cout << "parameterized constructor is called..." << endl;
    }
};

int main() {
    Car c1("BMW", 100000);
    c1.display();

    return 0;
}


// 1️⃣ What is this keyword?
//==> this is a pointer that points to the current object.
// Matlab, jo object abhi constructor ya method ke andar kaam kar raha hai, uska address hai this.

//==> Mainly use hota hai:
//1. Resolve naming conflicts (jab parameter aur member variable ka naam same ho)
//2. Return the current object (for method chaining)
//3. Pass current object to another function

//-----------------------------------------------------------

// Summary: Why pointer in this
// Scenario                         	Reason for pointer
// return this (method chaining) ->	Same object pe chain karna, copy nahi banani
// someFunction(this) ->            Function ko original object ka reference dena, memory save karna
// General this         ->           	Always points to current object in memory