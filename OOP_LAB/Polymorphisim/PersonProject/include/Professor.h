#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"

class Professor : public Person {
private:
    int numPubs;

public:
    int getNumPubsValue() const { return numPubs; }
    void getData();
    bool isOutstanding();
};

#endif
