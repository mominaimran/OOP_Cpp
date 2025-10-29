#include "Student.h"

Student::Student(float g) {
    gpa = g;
}

void Student::getData() {
    getName();
    cout << "Enter student GPA: ";
    cin >> gpa;
}

bool Student::isOutstanding() {
    return gpa > 3.5;
}
