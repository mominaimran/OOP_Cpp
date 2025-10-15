#include "Student.h"

Student::Student():Person(){
    regNo = 0;
    CGPA = 0;
}

Student::Student(string n, int a, int c, int r, int cg):Person(n, a, c){
    regNo = r;
    CGPA = cg;
}

void Student::setStudent(string n, int a, int c, int r, int cg){
    Person::setPerson(n, a, c);
    regNo = r;
    CGPA = cg;
}

void Student::showDetails()const{
    Person::showPerson();
    cout << "--- Student Info ---" << endl;
    cout << "Reg No: " << regNo << endl;
    cout << "CGPA: " << CGPA << endl;
}