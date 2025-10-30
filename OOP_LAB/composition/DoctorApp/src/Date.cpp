#include "Date.h"

Date::Date(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}

void Date::showDate() const {
    cout << day << "/" << month << "/" << year << endl;
}
