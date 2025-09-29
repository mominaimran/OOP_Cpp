#include "Person.h"
#include <string>
#include <iostream>
using namespace std;

Person::Person(){
    firstName = "N/A";
    lastName = "N/A";
}

Person::Person(string fn, string ln){
    firstName = fn;
    lastName = ln;
}

void Person::print(){
    cout << "Name: " << firstName << " " << lastName << endl;
}