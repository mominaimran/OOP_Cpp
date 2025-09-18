#include "name.h"
#include <string>
#include <iostream>

using namespace std;

void Name::print(){
    cout << firstName << " " << lastName << endl;
}

string Name::getFirstName(){
    return firstName;
}

string Name::getLastName(){
    return lastName;
}

void Name::setName(string fn, string ln){
    firstName = fn;
    lastName = ln;
}

Name::Name(string fn, string ln){
    firstName = fn;
    lastName = ln;
}