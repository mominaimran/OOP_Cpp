#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    string name;
    int age;

    void display(){
        cout << "Name: " << name << " Age: " << age;
    }
};

int main() {
    //dynamic memory allocation
    Student* S1 = new Student;
    S1->name = "Momina";
    S1->age = 22;
    
    //access function
    S1->display();

    //memory free
    delete S1;

    return 0;
}