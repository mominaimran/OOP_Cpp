#include "UnaryOperators.h"

UnaryOperators::UnaryOperators(int v):value(v){}

void UnaryOperators::input(){
    cout << "Enter Value: ";
    cin >> value;
}

void UnaryOperators::display()const{
    cout << "Value: " << value << endl;
}

UnaryOperators UnaryOperators::operator++(){
    ++value;
    return *this;
    // ++value;
    // UnaryOperators temp;
    // temp.value = value;
    // return temp;
}