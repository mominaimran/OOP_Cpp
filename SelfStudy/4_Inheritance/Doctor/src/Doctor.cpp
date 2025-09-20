#include "Doctor.h"
#include <string>
#include <iostream>

using namespace std;

Doctor::Doctor(string n, int s){
    name = n;
    salary = s;
}

void Doctor::setDoctor(string n, int s){
    name = n;
    salary = s;
}

void Doctor::displayDoctor() const{
    cout << "Name: " << name << ", Salary: " << salary << endl;
}