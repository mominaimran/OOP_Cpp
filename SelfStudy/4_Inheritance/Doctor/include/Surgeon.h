#ifndef SURGEON_H
#define SURGEON_H

#include "Doctor.h"
#include <string>
#include <iostream>
using namespace std;

class Surgeon : public Doctor{
    private:
        string specialization;
    public:
        Surgeon(string n = "Unknown", int s = 0, string spec = "General");
        void setSurgeon(string n, int s, string spec);
        void displaySurgeon() const;
};

#endif