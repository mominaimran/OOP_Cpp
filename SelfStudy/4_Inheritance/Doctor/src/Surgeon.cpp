#include "Surgeon.h"
#include <string>
#include <iostream>

using namespace std;

Surgeon::Surgeon(string n, int s, string spec):Doctor(n, s){
    specialization = spec;
}

void Surgeon::setSurgeon(string n, int s, string spec){
    setDoctor(n, s);
    specialization = spec;
}

void Surgeon::displaySurgeon() const {
    displayDoctor();   
    cout << "Specialization: " << specialization << endl;
}