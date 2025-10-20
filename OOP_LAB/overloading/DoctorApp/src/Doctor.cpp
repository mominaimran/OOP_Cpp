#include "Doctor.h"
#include <iostream>
using namespace std;

Doctor::Doctor(string n, int a){
    name = n;
    age = a;
}

//overload extraction
istream& operator>>(istream& in, Doctor& d){
    cout << "Enter name: ";
    getline(cin, d.name);
    cout << "Enter age: ";
    in >> d.age;
    in.ignore();
    return in;
}

//overload insertion
ostream& operator<<(ostream& out, const Doctor& d) {
    out << "Name: " << d.name << endl;
    out << "Age: " << d.age << endl;
    return out;
}

