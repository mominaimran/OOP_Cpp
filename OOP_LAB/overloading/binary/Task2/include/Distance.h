#ifndef DISTANCE_H
#define DISTANCE_H
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
public:
    void getData();
    void showData() const;
    void operator++();    // prefix increment
    void operator++(int); // postfix increment
    void operator--();    // prefix decrement
    void operator--(int); // postfix decrement
};

#endif
