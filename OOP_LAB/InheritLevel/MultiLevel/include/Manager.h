#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"

class Manager : public Employee{
    protected:
        int teamSize;
    public:
        Manager(string n = "N/A", int a = 0, int i = 0, int s = 0, int t = 0);
        void getData();
        void showData();
};

#endif