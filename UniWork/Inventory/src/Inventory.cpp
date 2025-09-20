#include "Inventory.h"
#include <string>
#include <iostream>
using namespace std;

Inventory::Inventory(){
    name="N/A";
    itemNum=0;
    price=0;
    unitsInStock=0;
}

Inventory::Inventory(string name, int itemNum, int price, int unitsInStock){
    this->name=name;
    this->itemNum=itemNum;
    this->price=price;
    this->unitsInStock=unitsInStock;
}

void Inventory::getDets(){
    cout << "Enter item name: ";
    getline(cin, name);
    cout << "Enter item number: ";
    cin >> itemNum;
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter units in stock: ";
    cin >> unitsInStock;

    cin.ignore();
}

void Inventory::displayDets(){
    cout << "Item name: " << name << endl;
    cout << "Item number: " << itemNum << endl;
    cout << "Item price: " << price << endl;
    cout << "Units in Stock: " << unitsInStock << endl;
}