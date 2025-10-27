#include "Professor.h"
#include <iostream>
using namespace std;

void Professor::getData() {
    getName();
    cout << "Enter number of professor's publications: ";
    cin >> numPubs;
}

bool Professor::isOutstanding() {
    return numPubs > 100;
}
