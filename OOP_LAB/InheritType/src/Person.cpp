#include "Person.h"

Person::Person(string n, int a, string c) {
    name = n;
    age = a;
    cnic = c;
}

void Person::displayPerson() {
    cout << "Name: " << name << ", Age: " << age << endl;
    cout << "CNIC (private, only Person can access): " << cnic << endl;
}
