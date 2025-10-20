#include "Engine.h"

Engine::Engine(int hp, string t) {
    horsepower = hp;
    type = t;
}

ostream& operator<<(ostream& out, const Engine& e) {
    out << "Horsepower: " << e.horsepower << endl;
    out << "Type: " << e.type << endl;
    return out;
}

istream& operator>>(istream& in, Engine& e) {
    cout << "Enter horsepower: ";
    in >> e.horsepower;
    in.ignore();
    cout << "Enter engine type: ";
    getline(in, e.type);
    return in;
}
