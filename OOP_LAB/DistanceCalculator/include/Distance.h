#ifndef DISTANCE_H 
#define DISTANCE_H

#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance(int ft = 0, float in = 0);
    void getDist();
    void showDist();

    Distance operator+(Distance d2);
    Distance operator-(Distance d2);
    Distance operator*(float scalar);
    Distance operator/(float scalar);

    bool operator<(Distance d2);
    bool operator>(Distance d2);
    bool operator==(Distance d2);

    float totalInches();

    friend istream& operator >> (istream &in, Distance &d);
    friend ostream& operator << (ostream &out, const Distance &d);
};

#endif
