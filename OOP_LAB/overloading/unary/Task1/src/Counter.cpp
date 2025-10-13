#include "Counter.h"

Counter::Counter():count(0){}

int Counter::getCount(){
    return count;
}

//Counter type for assignment, writing expressions and chaining purposes 
Counter Counter::operator++(){ // return by value
    ++count;               // increment the current object’s count
    Counter temp;          // make a new temporary object
    temp.count = count;    // copy updated value into temp
    return temp;           // return that temp object (by value)
}

void Counter::operator++(int){  //just do its job, return nothing
    count++;
}

Counter& Counter::operator--(){    //return by refernce
    --count;
    return *this;
}