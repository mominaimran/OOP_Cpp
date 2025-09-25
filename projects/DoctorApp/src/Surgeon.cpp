#include "Doctor.h"
#include "Surgeon.h"
#include <iostream>
using namespace std;

Surgeon::Surgeon():Doctor(){
    salary = 0;
}

void Surgeon::getData(){
    Doctor::getData();
    cout << "Enter salary: ";
    cin >> salary;
}

void Surgeon::ShowData(){
    Doctor::ShowData();
    cout << "salary:" << salary << endl;
}

int Surgeon::getSalary(){
    return salary;
}