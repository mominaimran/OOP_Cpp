#include "Doctor.h"
#include <iostream>
#include <string>

using namespace std;

Doctor::Doctor(string n, string s, int i){
    name = n;
    specialization = s;
    salary = i;
}

void Doctor::getDets(){
    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter specialization: ";
    getline(cin, specialization);

    cout << "Enter salary: ";
    cin >> salary;

    cin.ignore();
}

void Doctor::displayDets(){
    cout << "--- Doctor Info ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Specialization: " << specialization << endl;
    cout << "Salary: " << salary << endl;
}

Doctor::~Doctor(){
    cout << "Destructor is called" << endl;
}
