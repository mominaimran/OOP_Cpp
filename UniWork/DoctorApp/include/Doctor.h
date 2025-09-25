#ifndef DOCTOR_H
#define DOCTOR_H

class Doctor{
    protected:
        int Id;
        int age;
    public:
        Doctor();
        void getData();
        void showData();
};

#endif