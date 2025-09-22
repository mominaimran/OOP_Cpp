#include "Airplane.h"
#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;

Airplane::Airplane(string m, int y, int t):Vehicle(m, y){
    tailNum = t;
}

void Airplane::setDets(){
    Vehicle::setDets();
    cout << "Enter tail number: ";
    cin >> tailNum;
}

void Airplane::getDets(){
    Vehicle::getDets();
    cout << "Tail Number: " << tailNum << endl;
}