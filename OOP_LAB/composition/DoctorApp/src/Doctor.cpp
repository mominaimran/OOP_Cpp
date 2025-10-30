#include "Doctor.h"

Doctor::Doctor(string n, int a) {
    name = n;
    age = a;
}

void Doctor::showDoctorInfo() const {
    cout << "Doctor: " << name << ", Age: " << age << endl;
}
