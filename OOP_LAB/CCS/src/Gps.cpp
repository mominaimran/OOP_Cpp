#include "Gps.h"

Gps::Gps(string v, string cl){
    version = v;
    currentLocation = cl;
}

void Gps::setGps(string v, string cl ){
    version = v;
    currentLocation = cl;
}

void Gps::showGps()const{
    cout << "--- GPS Info ---" << endl;
    cout << "version: " << version << endl;
    cout << "current location: " << currentLocation << endl;
}