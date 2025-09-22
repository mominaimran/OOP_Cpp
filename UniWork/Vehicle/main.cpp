#include "Airplane.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    Airplane a1;
    Airplane a2("Emirates", 2010, 111);

    a1.setDets();
    cout << "\n--- Airplane Details a1 ---\n";
    a1.getDets();

    cout << "\n--- Airplane Details a2 ---\n";
    a2.getDets();
    
    return 0;
}
