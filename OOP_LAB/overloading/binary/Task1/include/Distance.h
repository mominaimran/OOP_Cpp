#ifndef DISTANCE_H
#define DISTANCE_H

#include <iostream>
using namespace std;

class Distance{
    private:
        int feet;
        float inches;
    public:
        Distance();
        Distance(int ft, float in);
        void getDist();
        void showDist() const;
        Distance operator+(Distance)const; //add 2 distances
};

#endif