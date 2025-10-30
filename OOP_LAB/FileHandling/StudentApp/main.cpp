#include <iostream>
#include <fstream>
#include "Student.h"
using namespace std;

int main() {
    Student s;
    s.input();

    // --- TEXT FILE HANDLING ---
    ofstream textFile("student.txt", ios::app);
    if(!textFile){
        cout << "Error opening text file!\n";
        return 1;
    }
    textFile << s.getRollNo() << " " << s.getGpa() << endl;
    textFile.close();
    cout << "\nData written to student.txt successfully!\n";

    // Read data from text file
    ifstream readText("student.txt");
    cout << "\nReading data from student.txt:\n";
    int roll;
    float gpa;
    while(readText >> roll >> gpa){
        Student temp;
        temp.setData(roll, gpa);
        temp.display();
    }
    readText.close();

    // --- BINARY FILE HANDLING ---
    ofstream binFile("student.dat", ios::binary | ios::app);
    if(!binFile){
        cout << "Error opening binary file!\n";
        return 1;
    }

    binFile.write(reinterpret_cast<char*>(&s), sizeof(s));
    binFile.close();
    cout << "\nData written to student.dat (binary file) successfully!\n";

    // --- READ BINARY FILE ---
    ifstream readBin("student.dat", ios::binary);
    if(!readBin){
        cout << "Error opening binary file for reading!\n";
        return 1;
    }

    cout << "\nReading data from student.dat (binary file):\n";
    Student temp;
    while(readBin.read(reinterpret_cast<char*>(&temp), sizeof(temp))){
        temp.display();
    }
    readBin.close();

    return 0;
}
