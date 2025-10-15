#include "Car.h"

Car::Car(string b, int hp):eng(hp){
    brand = b;
}

void Car::setCar(string b, int hp){
    brand = b;
    eng.setHp(hp);
}

void Car::showCar(){
    cout << "Car brand: " << brand << endl;
    eng.showHp();
}