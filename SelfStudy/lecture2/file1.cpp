#include <iostream>
using namespace std;

class Car{
    public:
    string brand;
    int price;

    void display(){
        cout << "Car Brand: " << brand << " | price: " << price << endl;
    }

    //default constructor
    Car(){
        brand = "unknown";
        price = 00000;
        cout << "default constructor is called..." << endl;
    }

    //parameterized constructor
    Car(string a, int b){
        brand = a;
        price = b;
        cout << "parameterized constructor is called..." << endl;
    }
};

int main() {
    Car c1;
    c1.display();
    Car c2("BMW", 10000000);
    c2.display();

    return 0;
}


// 1️⃣ What is a Constructor?
//==> Definition: A constructor is a special member function in a class that automatically runs when an object is created.
//==> Purpose: It initializes objects.
//or check for the availability of required resources before proceeding
//==> Key points:
// Same name as the class.
// No return type (not even void).
// Can be overloaded.
// Can have default arguments.