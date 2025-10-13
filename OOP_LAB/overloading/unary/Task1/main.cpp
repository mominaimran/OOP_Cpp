#include <iostream>
#include "Counter.h"
using namespace std;

int main() {
    Counter c1, c2, c3, c4, c5;

    ++c2;
    cout << "c2 = " << c2.getCount() << endl;

    c1 = ++c2;
    c3++;
    c4 = --c5;
    cout << "c1 = " << c1.getCount() << endl;
    cout << "c2 = " << c2.getCount() << endl;
    cout << "c3 = " << c3.getCount() << endl;
    cout << "c4 = " << c4.getCount() << endl;

    return 0;
}