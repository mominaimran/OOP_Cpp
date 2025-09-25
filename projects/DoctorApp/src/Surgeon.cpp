#include "Doctor.h"
#include "Surgeon.h"
#include <iostream>
using namespace std;

Surgeon::Surgeon():Doctor(){
    spec = "N/A";
    salary = 0;
}

void Surgeon::getData(){
    Doctor::getData();
    cout << "Enter specialization: ";
    getline(cin, spec);
    cout << "Enter salary: ";
    cin >> salary;
    cin.ignore();
}

void Surgeon::ShowData(){
    Doctor::ShowData();
    cout << "Specialization: " << spec << endl;
    cout << "salary:" << salary << endl;
}

int Surgeon::getSalary(){
    return salary;
}

string Surgeon::getSpec(){
    return spec;
}