#include "Student.h"

Student::Student(string n, int r, double c, char g):result(c, g){
    name = n;
    regNo = r;
}

Student::Student(string n, int r, Result res):result(res){
    name = n;
    regNo = r;
}

void Student::displayStudent(){
    cout << "==== Student Info ====" << endl;
    cout << "Student Name: " << name << endl;
    cout << "Reg No: " << regNo << endl;
    result.displayResult();
}