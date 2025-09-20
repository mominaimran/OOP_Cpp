#include "Surgeon.h"
#include <iostream>
using namespace std;

int main() {
    Surgeon s1("Dr. Momina Imran", 200000, "gynaecologist");
    cout << "Details of Surgeon:\n";
    s1.displaySurgeon();

    cout << "\nUpdating details...\n";
    s1.setSurgeon("Dr. Sara", 250000, "Neuro Surgery");
    s1.displaySurgeon();

    return 0;
}