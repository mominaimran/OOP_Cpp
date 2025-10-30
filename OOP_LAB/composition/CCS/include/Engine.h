#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>
#include <string>
using namespace std;

class Engine{
    private:
        string engineNumber;
    public:
        Engine(string en="N/A");
        void setEngine(string en="N/A");
        void showEngine()const;
};

#endif