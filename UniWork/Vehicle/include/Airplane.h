#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;

class Airplane : public Vehicle{
    int tailNum;
    public:
        Airplane(string m="N/A", int y=0, int t=0);
        void setDets();
        void getDets();
};

#endif