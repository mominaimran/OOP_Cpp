//student.cpp file
#include "Student.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <limits> // for numeric_limits
using namespace std;

void Student::inputDets() {
    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Registration No: ";
    getline(cin, regNo);

    cout << "Enter Semester: ";
    cin >> semester;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 🔥 FIX

    cout << "Enter Batch: ";
    getline(cin, batch);

    cout << "Enter GPA: ";
    cin >> gpa;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 🔥 FIX
}

void Student::displayTableHeader() {
    cout << "\033[1;34m"; 
    cout << left << setw(20) << "Name"
         << setw(15) << "Reg No"
         << setw(12) << "Semester"
         << setw(12) << "Batch"
         << setw(6)  << "GPA" << endl;

    cout << string(63, '-') << endl;
    cout << "\033[0m";
}

void Student::displayTableRow() {
    cout << left << setw(20) << name
         << setw(15) << regNo
         << setw(12) << semester
         << setw(12) << batch
         << setw(6)  << fixed << setprecision(2) << gpa
         << endl;
}
