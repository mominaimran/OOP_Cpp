#include "Person.h"

Person::Person(string f, string l) {
    firstName = f;
    lastName = l;
}

void Person::print() {
    cout << "Name: " << firstName << " " << lastName << endl;
}
