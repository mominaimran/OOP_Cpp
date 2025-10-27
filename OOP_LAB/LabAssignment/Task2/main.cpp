#include "Distance.h"

int main() {
    Distance d1, d2;
    cout << "===== Task 2: Distance Comparison =====" << endl;
    cout << "Enter first distance:\n";
    d1.getData();
    cout << "\nEnter second distance:\n";
    d2.getData();

    cout << "\nDistance 1: ";
    d1.showData();
    cout << "\nDistance 2: ";
    d2.showData();
    
    if (d1 == d2)
        cout << "\nBoth distances are equal.\n";
    else
        cout << "\nDistances are not equal.\n";
    return 0;
}
