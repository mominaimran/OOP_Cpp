#include "Teacher.h"

int main() {
    Teacher t1("Alina", 30, "12345-6789", 101, "Computer Science");

    cout << "----- Person Info -----" << endl;
    t1.displayPerson();

    cout << "----- Employee Info -----" << endl;
    t1.displayEmployee();

    cout << "----- Teacher Info -----" << endl;
    t1.displayTeacher();

    return 0;
}
