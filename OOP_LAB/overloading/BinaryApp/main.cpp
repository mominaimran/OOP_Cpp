#include <iostream>
#include "Book.h"
using namespace std;

int main() {
    Book b1, b2, b3, result;

    cout << "Enter first book price dets: " << endl;
    cin >> b1;
    cout << "Enter second book price dets: " << endl;
    cin >> b2;

    result = b1 + b2;
    cout << "Total price: ";
    cout << result;

    if(b1<b2)
        cout << "Book 2 is expensive" << endl;
    else
        cout << "Book 1 is expensive" << endl;
    
    b3 = b2;
    cout << b3;

    return 0;
}