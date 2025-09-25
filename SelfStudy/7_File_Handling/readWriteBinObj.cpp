#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Doctor {
private:
    char name[30];
    int age;
    char specialty[30];

public:
    void setDets() {
        cout << "Enter name: ";
        cin.ignore(); 
        cin.getline(name, 30);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter specialty: ";
        cin.getline(specialty, 30);
    }

    void getDets() {
        cout << "Name: " << name
             << ", Age: " << age
             << ", Specialty: " << specialty << endl;
    }
};

int main() {
    Doctor d1, d2;

    cout << "Enter Doctor Dets" << endl;
    d1.setDets();

    //write obj to binary file
    ofstream outFile("doctor.dat", ios::binary);
    outFile.write((char*)&d1, sizeof(d1));
    outFile.close();
    cout << "\nDoctor object written to file!\n";

    // --- Read object from binary file ---
    ifstream inFile("doctor.dat", ios::binary);
    inFile.read((char*)&d2, sizeof(d2));
    inFile.close();

    cout << "\nDoctor object read from file:\n";
    d2.getDets();

    return 0;
}