#include <iostream>
#include "juiceMachine.h"
using namespace std;

int cashRegister::getCurrentBalance() const{
    return cashOnHand;
}

void cashRegister::acceptAmount(int amountIn){
    cashOnHand += amountIn;
}

cashRegister::cashRegister(int cashIn){
    if (cashIn >= 0)
        cashOnHand = cashIn;
    else
        cashOnHand = 500;
}

//dispenserType Implementation

int dispenserType::getNoOfItems() const{
    return numberOfItems;
}

int dispenserType::getCost() const{
    return cost;
}

void dispenserType::makeSale(){
    numberOfItems--;
}

dispenserType::dispenserType(int setNoOfItems, int setCost){
    if (setNoOfItems >= 0)
        numberOfItems = setNoOfItems;
    else    
        numberOfItems = 50;
    if (setCost >= 0)
        cost = setCost;
    else
        cost = 50;
}
   

