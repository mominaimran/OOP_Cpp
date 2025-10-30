#include "Surgeon.h"

Surgeon::Surgeon(string n, int a, string spec, Date d)
    : Doctor(n, a), doj(d)
{
    specialization = spec;
}

void Surgeon::showSurgeonInfo() const
{
    showDoctorInfo();
    cout << "Specialization: " << specialization << endl;
    cout << "Surgery Date: ";
    doj.showDate();
}