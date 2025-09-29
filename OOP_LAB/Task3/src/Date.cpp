#include "Date.h"

Date::Date(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}

void Date::print() {
    cout << "DOB: " << day << "/" << month << "/" << year << endl;
}
