#include "Car.h"

Car::Car(string b, int hp, string t): engine(hp, t) {
    brand = b;
}

ostream& operator<<(ostream& out, const Car& c) {
    out << "Brand: " << c.brand << endl;
    out << "Engine Details:" << endl;
    out << c.engine;   // delegate to Engine’s overloaded operator
    return out;
}

istream& operator>>(istream& in, Car& c) {
    cout << "Enter car brand: ";
    getline(in, c.brand);
    cout << "Enter engine info:\n";
    in >> c.engine;    // delegate to Engine’s overloaded operator
    return in;
}
