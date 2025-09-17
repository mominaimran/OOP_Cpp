//Patient.h file
#pragma once 
#include <string>

using namespace std;

class Patient{
    private:
        string patientId, name, bloodGroup, disease;
        int age;
        double weight;

    public:
        Patient(); //default constructor
        Patient(string, string, int, double, string, string); //parameterized constructor

        void getDets();
        void displayDets();

        ~Patient();
};