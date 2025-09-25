#include "Doctor.h"
#include "Surgeon.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    Surgeon s, s1, s2;
    s1.getData();
    s2.getData();

    ofstream outFile("Surgeon.txt", ios::binary | ios::app);
    outFile.write(reinterpret_cast<char*>(&s1), sizeof(s1));
    outFile.write(reinterpret_cast<char*>(&s2), sizeof(s2));
    outFile.close();

    ifstream inFile("Surgeon.txt", ios::binary);
    cout << "------Surgeons Info------" << endl;
    while(inFile.read(reinterpret_cast<char*>(&s), sizeof(s))){
        s.showData();
        cout << "---------------------" << endl;
    }
    inFile.close();

    return 0;
}