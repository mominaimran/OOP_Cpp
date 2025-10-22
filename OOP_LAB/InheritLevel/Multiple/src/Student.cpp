#include "Student.h"

Student::Student(int r, float c) {
    rollNo = r;
    cgpa = c;
}

void Student::getStudentData() {
    cout << "Enter Roll No: ";
    cin >> rollNo;
    cout << "Enter CGPA: ";
    cin >> cgpa;
}

void Student::showStudentData() {
    cout << "Roll No: " << rollNo << ", CGPA: " << cgpa << endl;
}
