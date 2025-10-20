#include <iostream>
#include "Car.h"
using namespace std;

int main() {
    cout << "=== Car and Engine Composition Example ===" << endl;

    // 1️⃣ Create a Car object using user input
    Car car1;
    cout << "\nEnter details for car1:\n";
    cin >> car1;

    cout << "\n=== Displaying car1 info ===" << endl;
    cout << car1;

    // 2️⃣ Create another Car object using parameterized constructor
    Car car2("Honda", 1800, "Petrol");

    cout << "\n=== Displaying car2 info (Predefined Object) ===" << endl;
    cout << car2;

    return 0;
}
