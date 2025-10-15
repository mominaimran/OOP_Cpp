#include "Student.h"
#include "Teacher.h"

int main() {
    Student s1;
    Teacher t1("Dr.Aasma", 40, 123456, "OOP", 100000);
    s1.setStudent("Momina", 22, 123456, 5889, 4);
    s1.showDetails();
    cout << "---------------------" << endl;
    t1.showDetails();

    return 0;
}