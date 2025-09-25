#include "Surgeon.h"
#include <iostream>
using namespace std;

Surgeon::Surgeon():Doctor(){
    numOfSurgeries = 0;
}

void Surgeon::getData(){
    Doctor::getData();
    cout << "Total number of surgeries performed: ";
    cin >> numOfSurgeries;
}

void Surgeon::showData(){
    Doctor::showData();
    cout << "Surgeries performed : " << numOfSurgeries << endl;
}
