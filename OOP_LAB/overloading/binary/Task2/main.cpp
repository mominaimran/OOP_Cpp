#include <iostream>
#include "Distance.h"
using namespace std;

int main() {
    Distance d1;
    d1.getData();
    cout << "\nOriginal Distance: ";
    d1.showData();
    ++d1;
    cout << "After prefix increment: ";
    d1.showData();
    d1++;
    cout << "After postfix increment: ";
    d1.showData();
    --d1;
    cout << "After prefix decrement: ";
    d1.showData();
    d1--;
    cout << "After postfix decrement: ";
    d1.showData();
    return 0;
}
