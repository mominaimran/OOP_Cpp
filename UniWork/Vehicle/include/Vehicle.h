#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
using namespace std;

class Vehicle{
    string model;
    int year;

    public:
        Vehicle(string m="N/A", int y=0);
        void setDets();
        void getDets();
};

#endif