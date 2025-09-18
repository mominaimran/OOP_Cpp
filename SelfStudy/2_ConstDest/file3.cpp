#include <iostream>
using namespace std;

// Return current object for method chaining (return this)
class Car{
    string model;
    string color;

    public:
    Car* setModel(string model){
        this->model=model;
        return this;
    }
    Car* setColor(string color){
        this->color=color;
        return this;
    }

    void show() {
        cout << "Car: " << model << ", Color: " << color << endl;
    }
};

int main() {
    Car myCar;
    // Method chaining: ek hi object pe multiple methods
    myCar.setColor("Red")->setModel("Honda Civic")->show();

    return 0;
}

// Pointer reason:
// this pointer return karte hain taake same object pe chain ho.
// Agar object return karte, ek copy banti, aur chaining efficient nahi hoti.