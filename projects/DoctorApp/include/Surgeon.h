#ifndef SURGEON_H
#define SURGEON_H
#include "Doctor.h"

class Surgeon : public Doctor{
    protected:
        int salary;
    public:
        Surgeon();
        int getSalary();
        void getData();
        void ShowData();
};

#endif