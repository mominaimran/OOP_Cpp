#include "Sphere.h"
#include "ColorUtils.h"
#include <iostream>
using namespace std;

void Sphere::draw() {
    string code = getColorCode(color);
    cout << "\nColor: " << color << endl;
    cout << code;
    cout << "   @@@   \n";
    cout << " @@@@@@@ \n";
    cout << "@@@@@@@@@\n";
    cout << " @@@@@@@ \n";
    cout << "   @@@   \n";
    cout << "\033[0m";
    cout << "A " << color << " Sphere drawn successfully!\n";
}
