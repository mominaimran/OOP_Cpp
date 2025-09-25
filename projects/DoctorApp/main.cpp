#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h> 
#include "Surgeon.h"
using namespace std;

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main() {
    Surgeon s;
    ofstream outFile("Surgeon.txt", ios::binary); 

    if (!outFile) {
        setColor(12); // Red
        cout << "Error: Cannot open file to write!\n";
        setColor(7); 
        return 1;
    }

    char choice;
    do {
        setColor(4); 
        s.getData();  
        outFile.write(reinterpret_cast<char*>(&s), sizeof(s));

        setColor(10); 
        cout << "Surgeon data saved successfully!\n";
        Beep(1000, 200); 
        setColor(7); 

        cout << "Add another surgeon? (y/n): ";
        cin >> choice;
        cin.ignore();
    } while (choice == 'y' || choice == 'Y');

    outFile.close();

    // ===== Display data in table =====
    ifstream inFile("Surgeon.txt", ios::binary);
    if (!inFile) {
        setColor(12); 
        cout << "Error: Cannot open file to read!\n";
        setColor(7); 
        return 1;
    }

    setColor(11); 
    cout << "\n--- Surgeons Data ---\n";
    Beep(1200, 300); 
    setColor(14); 
    cout << left << setw(5) << "No."
         << setw(20) << "Name"
         << setw(10) << "Age"
         << setw(10) << "Salary" << "\n";
    cout << "---------------------------------------------\n";
    setColor(7); 

    int count = 1;
    while (inFile.read(reinterpret_cast<char*>(&s), sizeof(s))) {
        cout << left << setw(5) << count
             << setw(20) << s.getName()
             << setw(10) << s.getAge()
             << setw(10) << s.getSalary() << "\n";
        Beep(800, 100); 
        count++;
    }

    inFile.close();
    return 0;
}


