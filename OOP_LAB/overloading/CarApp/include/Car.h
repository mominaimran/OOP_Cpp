#ifndef CAR_H
#define CAR_H
#include "Engine.h"
#include <iostream>
#include <string>
using namespace std;

class Car {
    string brand;
    Engine engine;  // Composition: Car *has an* Engine

public:
    Car(string b = "N/A", int hp = 0, string t = "N/A");
    friend ostream& operator<<(ostream& out, const Car& c);
    friend istream& operator>>(istream& in, Car& c);
};

#endif
