#include "Car.h"

Car::Car(string b, int y, Engine e):engine(e){
    brand=b;
    year=y;
}

void Car::setCar(string b, int y, Engine e){
    brand=b;
    year=y;
    engine=e;
}

void Car::showCar()const{
    cout << "Car brand: " << brand << ", year: " << year << endl;
    engine.showEngine();
}