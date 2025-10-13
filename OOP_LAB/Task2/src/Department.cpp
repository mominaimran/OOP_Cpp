#include <iostream>
#include "Department.h"
using namespace std;

Department::Department() {
    deptName = "";
}

Department::Department(string name, Teacher t) {
    deptName = name;
    teacher = t;
}

void Department::display() {
    cout << "Department: " << deptName << endl;
    teacher.display();
    cout << endl;
}
