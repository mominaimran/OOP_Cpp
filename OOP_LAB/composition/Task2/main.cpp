#include <iostream>
#include "Teacher.h"
#include "Department.h"
#include "University.h"
using namespace std;

int main() {
    Teacher t1("Dr. Aasma", "OOP");
    Department d1("Computer Science", t1);
    University u("IIUI", d1);
    u.display();

    return 0;
}
