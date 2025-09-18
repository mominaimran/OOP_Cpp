#include "Die.h"
#include <cstdlib> // rand, srand
#include <ctime>   // time

Die::Die() {
    num = 1; // default face value
}

void Die::roll() {
    num = rand() % 6 + 1; // random number 1-6
}

int Die::getNum() {
    return num;
}
