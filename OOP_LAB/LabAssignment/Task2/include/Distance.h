#ifndef DISTANCE_H
#define DISTANCE_H
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;
public:
    Distance(int f = 0, int i = 0);
    void getData();
    void showData() const;
    //equality operator overloading
    bool operator==(const Distance& d2) const;
};

#endif
