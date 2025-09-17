#include <iostream>
using namespace std;

class Car;

void showCarInfo(Car* c);

class Car{
    string model;

    public:
    Car(string m){model=m;}

    void report() {
        showCarInfo(this);  // pass current object pointer
    }

    void display() {
        cout << "Car Model: " << model << endl;
    }
};

// Function definition
void showCarInfo(Car* c) {
    cout << "Inside function: ";
    c->display();  // access object data through pointer
}

int main() {
    Car car1("Suzuki Swift");
    car1.report();

    return 0;
}

// Pointer reason:
// Function ko original object ka reference diya, copy nahi.
// Efficient memory use and original object ke data pe kaam ho sakta hai.