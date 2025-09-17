//Patient.cpp file
#include "Patient.h"
#include <iostream>
#include <iomanip>

using namespace std;

Patient::Patient()
{
    patientId = "N/A";
    name = "unknown";
    age = 0;
    weight = 0.0;
    bloodGroup = "N/A";
    disease = "N/A";
}

Patient::Patient(string a, string b, int e, double f, string c, string d)
{
    patientId = a;
    name = b;
    age = e;
    weight = f;
    bloodGroup = c;
    disease = d;
}

void Patient::getDets()
{
    cout << "Enter Patient ID: ";
    getline(cin, patientId);

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Weight (in kgs): ";
    cin >> weight;
    cin.ignore();

    cout << "Enter Disease: ";
    getline(cin, disease);

    cout << "Enter Blood Group: ";
    getline(cin, bloodGroup);
}

void Patient::displayDets(){

    cout << "\n--- Patient Record ---\n";
    cout << "===== Patient Profile =====\n";
    cout << "> ID        : " << patientId << endl;
    cout << "> Name      : " << name << endl;
    cout << "> Age       : " << age << " years" << endl;
    cout << "> Weight    : " << weight << " kg" << endl;
    cout << "> Disease   : " << disease << endl;
    cout << "> BloodGroup  : " << bloodGroup << endl;
    cout << "============================\n";
}

Patient::~Patient(){
    cout << "destructor called" << endl;
}