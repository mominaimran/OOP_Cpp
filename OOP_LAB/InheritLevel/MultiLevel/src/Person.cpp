#include "Person.h"

Person::Person(string n, int a){
    name = n;
    age = a;
}

void Person::getData(){
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cin.ignore();
}

void Person::showData(){
    cout << "Name: " << name << ", Age: " << age << endl;
}