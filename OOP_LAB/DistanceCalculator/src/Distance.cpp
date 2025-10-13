#include "Distance.h"

// Constructor
Distance::Distance(int ft, float in) {
    feet = ft;
    inches = in;
}

// Input distance
void Distance::getDist() {
    cout << "Enter feet: ";
    cin >> feet;
    cout << "Enter inches: ";
    cin >> inches;
}

// Display distance
void Distance::showDist() {
    cout << feet << " feet " << inches << " inches" << endl;
}

// Convert total distance to inches
float Distance::totalInches() {
    return feet * 12 + inches;
}

// Add two distances
Distance Distance::operator+(Distance d2) {
    Distance temp;
    temp.inches = inches + d2.inches;
    temp.feet = feet + d2.feet;
    if (temp.inches >= 12.0) {
        temp.inches -= 12.0;
        temp.feet++;
    }
    return temp;
}

// Subtract two distances
Distance Distance::operator-(Distance d2) {
    Distance temp;
    float diff = totalInches() - d2.totalInches();
    if (diff < 0)
        diff = -diff;  // keep positive

    temp.feet = (int)(diff / 12);
    temp.inches = diff - (temp.feet * 12);
    return temp;
}

// Multiply distance by scalar
Distance Distance::operator*(float scalar) {
    Distance temp;
    float total = totalInches() * scalar;
    temp.feet = (int)(total / 12);
    temp.inches = total - (temp.feet * 12);
    return temp;
}

// Divide distance by scalar
Distance Distance::operator/(float scalar) {
    Distance temp;
    if (scalar == 0) {
        cout << "Division by zero not allowed!" << endl;
        temp.feet = 0;
        temp.inches = 0;
        return temp;
    }

    float total = totalInches() / scalar;
    temp.feet = (int)(total / 12);
    temp.inches = total - (temp.feet * 12);
    return temp;
}

// Comparison operators
bool Distance::operator<(Distance d2) {
    return totalInches() < d2.totalInches();
}

bool Distance::operator>(Distance d2) {
    return totalInches() > d2.totalInches();
}

bool Distance::operator==(Distance d2) {
    return totalInches() == d2.totalInches();
}

istream& operator>>(istream &in, Distance &d) {
    cout << "Enter feet: ";
    in >> d.feet;
    cout << "Enter inches: ";
    in >> d.inches;
    return in;
}

ostream& operator<<(ostream &out, const Distance &d) {
    out << d.feet << " feet " << d.inches << " inches";
    return out;
}