#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>
using namespace std;

class Engine{
    private:
        int horsePower;
    public:
        Engine(int hp = 100);
        void setHp(int hp);
        void showHp();
};

#endif