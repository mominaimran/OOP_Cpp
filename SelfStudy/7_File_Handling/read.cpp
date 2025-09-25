#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("data.txt");

    if (!fin) {
        cout << "File not found!" << endl;
        return 1;
    }

    string line;
    while(getline(fin, line)){
        cout << line << endl;
    }
    fin.close();

    return 0;
}

// ⚡ Step 4: File Modes (important)
// ios::in → read mode
// ios::out → write mode (overwrite)
// ios::app → append mode
// ios::ate → open file and go to end
// ios::trunc → delete existing content when opening
// ios::binary → binary mode (non-text data)