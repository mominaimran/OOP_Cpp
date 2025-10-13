#include "Distance.h"

void Distance::getData() {
    cout << "Input Distance you want to manipulate..." << endl;
    cout << "Enter feet: ";
    cin >> feet;
    cout << "Enter inches: ";
    cin >> inches;
    if (inches >= 12.0) {  
        inches -= 12.0;     
        feet++;             
    }
}

void Distance::showData() const {
    cout << feet << " feet " << inches << " inches" << endl;
}

void Distance::operator++() {
    ++feet;                 
    ++inches;               
    if (inches >= 12.0) {   
        inches -= 12.0;
        feet++;
    }
}

void Distance::operator++(int) {
    feet++;                 
    inches++;               
    if (inches >= 12.0) {   
        inches -= 12.0;
        feet++;
    }
}

void Distance::operator--() {
    feet--;       
    inches--;     
    if (inches < 0.0) { 
        inches += 12.0; 
        feet--;
    }
}

void Distance::operator--(int) {
    feet--;       
    inches--;    
    if (inches < 0.0) { 
        inches += 12.0; 
        feet--;
    }
}

