#include "Doctor.h"
#include <iostream>
using namespace std;

Doctor::Doctor(){
    Id = 0;
    age = 0;
}

void Doctor::getData(){
    cout << "Enter Id: ";
    cin >> Id;

    cout << "Enter age: ";
    cin >> age;
}

void Doctor::showData(){
    cout << "Id: " << Id << endl;
    cout << "Age: " << age << endl;
}
