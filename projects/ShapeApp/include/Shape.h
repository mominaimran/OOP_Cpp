#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
    string color;
public:
    void setColor(const string& c);
    string getColor() const;
};

#endif
