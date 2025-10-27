#include "Person.h"

void Person::getName(){
    cout << "Enter name: ";
    cin >> name;
}

void Person::putName(){
    cout << "Name is: " << name << endl;
}

Person::~Person() {
    // nothing needed here
}
