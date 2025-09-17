#include <iostream>
using namespace std;

//copy constructor

class Car{
    public:
    string model;
    string color;

    Car(string model, string color){
        this->model=model;
        this->color=color;
    }
//custom copy constructor now default will not formed by compiler 
    Car(Car &B){
        model=B.model;
        color=B.color;
    }

    void show(){
        cout << "Model: " << model << " | Color: " << color << endl;
    }
};

int main() {
    Car c1("BMW", "black");
    c1.show();
    Car c2(c1); //copied by default copy constructor
    c2.show();
    Car c3("Audi", "black");
    c3.show();
    Car c4(c3);
    c4.show();
    Car c5 = c4; //value assignment with assignment operator
    c5.show();

    return 0;
}