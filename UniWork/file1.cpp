#include <iostream>
#include <iomanip>
using namespace std;

class circleType{
    private:
        double radius;

    public:
        void setRadius(double r){
            if(r > 0)
                radius = r;
            else 
                radius = 0; 
        };
        double getRadius(){
            return radius;
        };
        double area(){
            return 3.14 * radius * radius;
        };
        double circumference(){
            return 2 * 3.14 * radius;
        };

        circleType(double r = 0){
            setRadius(r);
        };
};

int main() {
    circleType c1(8);
    circleType c2;

    double radius;
    cout << fixed << showpoint << setprecision(2);

    cout << "--- Circle 1 --- \n" << "radius: " << c1.getRadius() << " area: " << c1.area() << " circumference: " << c1.circumference() << endl;

    cout << "--- Circle 2 --- \n" << "radius: " << c2.getRadius() << " area: " << c2.area() << " circumference: " << c2.circumference() << endl;

    cout << "Enter radius: ";
    cin >> radius;

    c2.setRadius(radius);
    cout << "After setting the radius." << endl;
    cout << "--- Circle 2 --- \n" << "radius: " << c2.getRadius() << " area: " << c2.area() << " circumference: " << c2.circumference() << endl;

    return 0;
}