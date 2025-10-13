#ifndef COUNTER_H
#define COUNTER_H

class Counter {
private:
    int count;
public:
    Counter();
    int getCount();

    void operator++();    // prefix increment
    void operator++(int); // postfix increment
    void operator--();    // prefix decrement
    void operator--(int); // postfix decrement
};

#endif
