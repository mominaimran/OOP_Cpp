#ifndef COLORUTILS_H
#define COLORUTILS_H

#include <string>
using namespace std;

inline string getColorCode(string color) {
    if (color == "red") return "\033[31m";
    if (color == "green") return "\033[32m";
    if (color == "yellow") return "\033[33m";
    if (color == "blue") return "\033[34m";
    if (color == "magenta") return "\033[35m";
    if (color == "cyan") return "\033[36m";
    if (color == "white") return "\033[37m";
    return "\033[0m"; // reset/default
}

#endif
