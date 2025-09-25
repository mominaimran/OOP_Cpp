#ifdef _WIN32
#include <windows.h>
#endif
#include "ConsoleUtils.h"

// Function definition
void setColor(int colorCode) {
#ifdef _WIN32
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, colorCode);
#else
    // For Linux/Mac: you can implement ANSI codes here if needed
#endif
}
