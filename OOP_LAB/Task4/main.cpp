#include <iostream>
#include "Counter.h"
using namespace std;

int main() {
    Counter c1;

    cout << "Initial count: " << c1.getCount() << endl;

    ++c1;  
    cout << "After prefix increment (++c1): " << c1.getCount() << endl;

    c1++;  
    cout << "After postfix increment (c1++): " << c1.getCount() << endl;

    --c1;  
    cout << "After prefix decrement (--c1): " << c1.getCount() << endl;

    c1--;  
    cout << "After postfix decrement (c1--): " << c1.getCount() << endl;

    return 0;
}
