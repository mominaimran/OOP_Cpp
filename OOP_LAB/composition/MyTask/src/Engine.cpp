#include "Engine.h"

Engine::Engine(int hp){
    horsePower = hp;
}

void Engine::setHp(int hp){
    horsePower = hp;
}

void Engine::showHp(){
    cout << "Horsepower: " << horsePower << endl;
}