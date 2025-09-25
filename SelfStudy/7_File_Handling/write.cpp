#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("data.txt");

    if (!fout) {
        cout << "File not created!" << endl;
        return 1;
    }

    fout << "Hi! Momina" << endl;
    fout << "Revising file handling in c++" << endl;

    fout.close(); 
    cout << "Data written successfully!" << endl;

    return 0;
}