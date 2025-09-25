#ifndef SURGEON_H
#define SURGEON_H
#include "Doctor.h"

class Surgeon : public Doctor{
    protected:
        int numOfSurgeries;
    public:
        Surgeon();
        void getData();
        void showData();
};

#endif