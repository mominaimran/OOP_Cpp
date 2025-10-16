#include "extClockType.h"
#include <iostream>
using namespace std;

int main() {
    extClockType myClock(10, 45, 30, "PST");
    
    cout << "Current Time: ";
    myClock.printTime();

    cout << "\nChanging time zone...\n";
    myClock.setTimeZone("EST");

    cout << "Updated Time: ";
    myClock.printTime();

    return 0;
}
