#include "Engine.h"

Engine::Engine(string en){
    engineNumber = en;
}

void Engine::setEngine(string en){
    engineNumber = en;
}

void Engine::showEngine()const{
    cout << "Engine Number: " << engineNumber << endl;
}