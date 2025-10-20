#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>
#include <string>
using namespace std;

class Engine {
    int horsepower;
    string type;

public:
    Engine(int hp = 0, string t = "N/A");
    // Friend functions for input/output
    friend ostream& operator<<(ostream& out, const Engine& e);
    friend istream& operator>>(istream& in, Engine& e);
};

#endif
