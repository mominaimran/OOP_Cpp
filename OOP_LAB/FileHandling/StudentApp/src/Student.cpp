#include "Student.h"

Student::Student(int r, float g) : rollNo(r), gpa(g) {}

void Student::input() {
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter GPA: ";
    cin >> gpa;
}

void Student::display() const {
    cout << "Roll No: " << rollNo << ", GPA: " << gpa << endl;
}

int Student::getRollNo() const { return rollNo; }
float Student::getGpa() const { return gpa; }

void Student::setData(int r, float g){
    rollNo = r;
    gpa = g;
}