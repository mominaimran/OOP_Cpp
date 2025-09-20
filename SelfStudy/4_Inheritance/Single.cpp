#include <iostream>
#include <string>
using namespace std;

class Vehicle{
    protected:
        int wheels;
    public:
        void start(){
            cout << "Vehicle is starting" << endl;
        }
};

class Car : public Vehicle{
    protected:
        string brand;
    public: 
        void setBrand(string b){
            brand = b;
        }
        string getBrand(){
            return brand;
        }
        void honk(){
            cout << brand << " is honking..." << endl;
        }
};

int main() {
    Car myCar;
    myCar.start();
    myCar.setBrand("BMW");
    myCar.honk();
    
    return 0;
}

// ⚡ Quick Recap:
// Single Inheritance = ek parent + ek child.
// Simple, clean, foundational.
// Best jab ek “is-a” relationship ho.