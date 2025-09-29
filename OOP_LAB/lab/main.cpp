#include <iostream>
#include <fstream>
#include <cstdlib> 
using namespace std;

int main() {
    ofstream outFile;
    char fileName[] = "in.txt";
    outFile.open(fileName);

    if(!outFile){
        cout << "\nCan't open file";
        exit(1);
    }

    outFile << "i love ... programming";

    long pos = outFile.tellp();
    outFile.seekp(pos-22);
    outFile << "i love C++ programming";

    outFile.close();

    return 0;
}
