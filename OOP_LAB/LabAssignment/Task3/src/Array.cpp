#include "Array.h"

Array::Array(){
    // Initialize array elements with some values
    for (int i = 0; i < 5; i++) {
        num[i] = (i + 1) * 10;
    }
}
int& Array::operator[](int i) {
    if (i < 0 || i >= 5) {
        cout << "Invalid index!" << endl;
        // Returning first element as fallback
        return num[0];
    }
    return num[i];
}
void Array::display() {
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << num[i] << endl;
    }
}