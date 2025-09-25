#include "Doctor.h"
#include <iostream>
using namespace std;

Doctor::Doctor(){
    name = "N/A";
    age = 0;
}

void Doctor::getData(){
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cin.ignore();
}

void Doctor::ShowData(){
    cout << "Name: " << name << endl;
    cout << "Age:" << age << endl;
}

string Doctor::getName(){
    return name;
}

int Doctor::getAge(){
    return age;
}

