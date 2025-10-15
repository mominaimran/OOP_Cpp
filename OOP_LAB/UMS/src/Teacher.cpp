#include "Teacher.h"

Teacher::Teacher():Person(){
    subject = "N/A";
    salary = 0;
}

Teacher::Teacher(string n, int a, int c, string sub, int sal):Person(n, a, c){
    subject = sub;
    salary = sal;
}

void Teacher::setTeacher(string n, int a, int c, string sub, int sal){
    Person::setPerson(n, a, c);
    subject = sub;
    salary = sal;
}

void Teacher::showDetails()const{
    Person::showPerson();
    cout << "--- Teacher Info ---" << endl;
    cout << "Subject: " << subject << endl;
    cout << "Salary: " << salary << endl;
}