#include "Person.h"

Person::Person(){
    name = "unknown";
    age = 0;
    CNIC = 0;
}

Person::Person(string n, int a, int c):name(n), age(a), CNIC(c){}

void Person::setPerson(string n, int a, int c){
    name = n;
    age = a;
    CNIC = c;
}

void Person::showPerson()const{
    cout << "Name: " << name << ", Age: " << age << ", CNIC: " << CNIC << endl;
}