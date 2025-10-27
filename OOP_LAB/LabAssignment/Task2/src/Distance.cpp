#include "Distance.h"

Distance::Distance(int f, int i) {
    feet = f;
    inches = i;
}
void Distance::getData() {
    cout << "Enter feet: ";
    cin >> feet;
    cout << "Enter inches: ";
    cin >> inches;
}
void Distance::showData() const {
    cout << feet << " feet " << inches << " inches";
}
bool Distance::operator==(const Distance& d2) const {
    return (feet == d2.feet && inches == d2.inches);
}
