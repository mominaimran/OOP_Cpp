#include "Student.h"

// Default constructor
Student::Student() {
    name = "N/A";
    age = 0;
}

// Parameterized constructor
Student::Student(string n, int a) {
    name = n;
    age = a;
}

// Overload >> operator (input)
istream& operator>>(istream& in, Student& s) {
    cout << "Enter name: ";
    in >> s.name;
    cout << "Enter age: ";
    in >> s.age;
    return in;
}

// Overload << operator (output)
ostream& operator<<(ostream& out, const Student& s) {
    out << "Name: " << s.name << ", Age: " << s.age;
    return out;
}
