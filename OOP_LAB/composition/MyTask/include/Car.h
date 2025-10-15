#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
#include "Engine.h"
using namespace std;

class Car{
    private:
        string brand;
        Engine eng;
    public:
        Car(string b="N/A", int hp=0);
        void setCar(string b, int hp);
        void showCar();
};

#endif