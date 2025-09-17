#pragma once
#include <string>
#include <iostream>

using namespace std;

class Doctor{
    private:
        string name;
        string specialization;
        int salary;
    public:
        void getDets();
        void displayDets();

        Doctor(string = "N/A", string = "N/A", int = 0);
        ~Doctor();
};