#include "Person.h"
#include <limits>

void Person::getName(){
    cout << "Enter name: ";
    getline(cin >> ws, name);
}

void Person::putName(){
    cout << "Name is: " << name << endl;
}

Person::~Person() {
    // nothing needed here
}
