//main.cpp file
#include "Student.h"
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter total no. of students: ";
    cin >> n;
    cin.ignore();

    Student s1[n];

    cout << "\n--- Enter Student Details ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << " ---" << endl;
        s1[i].inputDets();
    }

    cout << "\n=== Student Records (Tabular Format) ===\n";
    s1[0].displayTableHeader();

    for (int i = 0; i < n; i++) {
        s1[i].displayTableRow();
    }

    return 0;
}
