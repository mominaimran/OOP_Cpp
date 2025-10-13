#include <iostream>
#include "Distance.h"
using namespace std;

int main() {
    Distance dist1, dist3, dist4;
    dist1.getDist();                // get from user

    Distance dist2(11, 6.25);       // initialize dist2
    dist3 = dist1 + dist2;          // single + operator
    dist4 = dist1 + dist2 + dist3;  // multiple + operators

    cout << "\ndist1 = "; dist1.showDist(); cout << endl;
    cout << "dist2 = "; dist2.showDist(); cout << endl;
    cout << "dist3 = "; dist3.showDist(); cout << endl;
    cout << "dist4 = "; dist4.showDist(); cout << endl;

    return 0;
}

// To sum it up 💬
// ✅ 1st operand (left): compiler khud function ko call karte waqt this pointer se pass karta hai.
// ✅ 2nd operand (right): function ke parameter se aata hai.