#include <iostream>
#include <fstream>
#include "Student.h"
using namespace std;

int main() {
    Student s;

    ofstream outFile("student.txt", ios::app);

    cin >> s;
    cout << s;
    outFile << s;

    outFile.close();
    cout << "\nData written to student.txt successfully!\n";

    return 0;
}