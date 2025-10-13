#include "extClockType.h"
#include <iostream>
using namespace std;

extClockType::extClockType(int h, int m, int s, string z):clockType(h,m,s){
    timeZone = z;
}

void extClockType::setTimeZone(string zone) {
    timeZone = zone;
}

string extClockType::getTimeZone() const {
    return timeZone;
}

void extClockType::printTime() const {
    clockType::printTime();
    cout << " " << timeZone;
}