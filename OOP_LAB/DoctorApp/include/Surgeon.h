#ifndef SURGEON_H
#define SURGEON_H

#include "Doctor.h"
#include "Date.h"

class Surgeon : public Doctor {
    private:
        string specialization;
        Date doj;
    public:
        Surgeon(string n, int a, string spec, Date d);
        void showSurgeonInfo() const;
};

#endif