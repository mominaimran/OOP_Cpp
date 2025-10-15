#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
#include "Engine.h"
using namespace std;

class Car{
    private:
        string brand;
        int year;
        Engine engine;
    public:
        Car(string b="unknown", int y=0, Engine e=Engine());
        void setCar(string b, int y, Engine e);
        void showCar()const;
};

#endif