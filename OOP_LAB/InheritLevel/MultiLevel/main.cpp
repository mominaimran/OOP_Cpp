#include <iostream>
#include "Manager.h"
using namespace std;

int main() {
    cout << "=== Manager Information System ===" << endl;

    Manager m;  // default constructor
    m.getData();

    cout << "\n--- Displaying Manager Details ---" << endl;
    m.showData();

    return 0;
}
