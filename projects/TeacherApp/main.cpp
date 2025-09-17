#include <iostream>
#include "Teacher.h"
using namespace std;

int main() {
    Teacher t1;
    t1.displayDets(); //constructor call displaying default values

    cout << "Enter Teacher Details: " << endl;
    t1.inputDets();

    cout << "Displaying Teacher Details: " << endl;
    t1.displayDets();
    
    return 0;
}