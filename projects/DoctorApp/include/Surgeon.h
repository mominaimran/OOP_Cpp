#ifndef SURGEON_H
#define SURGEON_H
#include "Doctor.h"
#include <string>
using namespace std;

class Surgeon : public Doctor{
    protected:
        string spec; 
        int salary;
    public:
        Surgeon();
        int getSalary();
        string getSpec();
        void getData();
        void ShowData();
};

#endif