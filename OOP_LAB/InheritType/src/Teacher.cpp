#include "Teacher.h"

Teacher::Teacher(string n, int a, string c, int id, string sub)
    : Employee(n, a, c, id) {
    subject = sub;
}

void Teacher::displayTeacher() {
    cout << "Subject: " << subject << endl;

    // Access check
    cout << "Name (public from Person): " << name << endl;     // ✅ accessible
    // cout << cnic; ❌ private → never accessible
    // cout << age;  ✅ accessible here (because protected)
}
