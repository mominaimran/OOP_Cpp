#include <iostream>
#include "Surgeon.h"
using namespace std;

int main() {
    Surgeon s1, s2("Momina", 22, "Gynaecology", 120000);

    cout << "--- Enter Surgeon Details ---" << endl;
    cin >> s1;

    cout << "\n--- Displaying Surgeon Details ---" << endl;
    cout << s1;

    cout << "\n--- Predefined Surgeon ---" << endl;
    cout << s2;

    return 0;
}
