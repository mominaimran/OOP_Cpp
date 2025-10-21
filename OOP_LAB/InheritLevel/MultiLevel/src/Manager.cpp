#include "Manager.h"

Manager::Manager(string n, int a, int i, int s, int t)
    : Employee(n, a, i, s) { // Pass all required parameters
    teamSize = t;
}

void Manager::getData(){
    Employee::getData();
    cout << "Enter Team Size: ";
    cin >> teamSize;
}

void Manager::showData(){
    Employee::showData();
    cout << "Team Size: " << teamSize << endl;
}