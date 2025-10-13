#include "Counter.h"

Counter::Counter() : count(0) {}

int Counter::getCount() {
    return count;
}

void Counter::operator++() {   // prefix
    ++count;
}

void Counter::operator++(int) {  // postfix
    count++;
}

void Counter::operator--() {   // prefix
    --count;
}

void Counter::operator--(int) {  // postfix
    count--;
}
