#include <iostream>
#include "Teacher.h"
using namespace std;

Teacher::Teacher() {
    name = "";
    subject = "";
}

Teacher::Teacher(string n, string s) {
    name = n;
    subject = s;
}

void Teacher::display() {
    cout << "Teacher Name: " << name 
    <<  ", Subject: " << subject << endl;
}
