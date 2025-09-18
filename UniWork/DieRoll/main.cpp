#include <iostream>
#include "Die.h"
using namespace std;

int main() {
    srand(time(0)); // random seed ek hi jagah lagana best practice hai

    Die d1, d2;

    d1.roll();
    d2.roll();

    cout << "Die 1: " << d1.getNum() << endl;
    cout << "Die 2: " << d2.getNum() << endl;

    return 0;
}
