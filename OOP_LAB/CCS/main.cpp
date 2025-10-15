#include <iostream>
#include "Car.h"
#include "Engine.h"
using namespace std;

int main() {
    Engine e1("a21");
    Car c1;
    c1.setCar("BMW", 2020, e1);
    c1.showCar();

    return 0;
}