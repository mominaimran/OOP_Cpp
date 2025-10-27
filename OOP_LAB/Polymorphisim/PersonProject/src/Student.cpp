#include "Student.h"
#include <iostream>
using namespace std;

void Student::getData() {
    getName();
    cout << "Enter student GPA: ";
    cin >> gpa;
}

bool Student::isOutstanding() {
    return gpa > 3.5;
}
