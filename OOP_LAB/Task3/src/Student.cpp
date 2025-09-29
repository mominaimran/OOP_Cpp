#include "Student.h"

Student::Student(string f, string l, int d, int m, int y) : Person(f, l), dob(d, m, y) {}

void Student::print() {
    Person::print();
    dob.print();
}
