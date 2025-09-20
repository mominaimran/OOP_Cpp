#include "Inventory.h"
#include <iostream>
using namespace std;

int main() {
    Inventory i1[3];

    for(int i=0; i<3; i++){
        cout << "Enter item" << i+1 << " Details: " << endl;
        i1[i].getDets();
    }

    cout << "--- Inventory Details ---" << endl;
    for(int i=0; i<3; i++){
        i1[i].displayDets();
        cout << "-------------------------" << endl;
    }

    return 0;
}