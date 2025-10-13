#include "Distance.h"

Distance::Distance(){
    feet = 0;
    inches = 0.0;
}

Distance::Distance(int ft, float in){
    feet = ft;
    inches = in;
}

void Distance::getDist() {
    cout << "\nEnter feet: ";
    cin >> feet;
    cout << "Enter inches: ";
    cin >> inches;
}

void Distance::showDist()const{
    cout << feet << "\'-" << inches << '\"';
}

Distance Distance::operator+(Distance d2)const{
    int f = feet + d2.feet;
    int i = inches + d2.inches;

    if(i>=12){
        i -= 12;
        f++;
    }

    return Distance(f, i);
}