#ifndef RESULT_H
#define RESULT_H

#include <iostream>
using namespace std;

class Result{
    private:
        double CGPA;
        char grade;
    public:
        Result(double c=0.0, char g='f');
        void displayResult();
};

#endif