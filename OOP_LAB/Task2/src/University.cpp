#include <iostream>
#include "University.h"
using namespace std;

University::University() {
    uniName = "";
}

University::University(string name, Department d) {
    uniName = name;
    department = d;
}

void University::display() {
    cout << "University: " << uniName << endl;
    department.display();
}
