#ifndef EXTCLOCKTYPE_H
#define EXTCLOCKTYPE_H
#include "clockType.h"
#include <string>
using namespace std;

class extClockType : public clockType
{
private:
    string timeZone;

public:
    extClockType(int h = 0, int m = 0, int s = 0, string z = "N/A");
    void setTimeZone(string zone);
    string getTimeZone() const;
    void printTime() const;
};

#endif