#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <iostream>
using namespace std;

class Inventory{
    private:
        string name;
        int itemNum;
        int price;
        int unitsInStock;
    public:
        void getDets();
        void displayDets();
        Inventory();
        Inventory(string name, int itemNum, int price, int unitsInStock);
};
#endif