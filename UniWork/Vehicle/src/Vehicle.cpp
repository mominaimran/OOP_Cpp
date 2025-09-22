#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;

Vehicle::Vehicle(string m, int y){
    model = m;
    year = y;
}

void Vehicle::setDets(){
    cout << "Enter model: ";
    getline(cin, model);
    cout << "Enter year: ";
    cin >> year;
    cin.ignore();
}

void Vehicle::getDets(){
    cout << "Vehicle Model: " << model << endl;
    cout << "Manufacturing year: " << year << endl;
}