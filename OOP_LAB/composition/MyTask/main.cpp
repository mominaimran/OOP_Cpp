#include <iostream>
using namespace std;
#include "Car.h"

int main() {
    Car c1, c2;
    c2.setCar("BMW", 200);
    c1.showCar();
    c2.showCar();

    return 0;
}