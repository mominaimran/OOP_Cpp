#include <iostream>
#include <string>
using namespace std;

class Student{
    public: //by default private 
    string name;
    int rollNum;
    double CGPA;
};

int main() {
    Student S1;
    S1.name = "Momina";
    S1.rollNum = 5889;
    S1.CGPA = 3.98;

    cout << "Name: " << S1.name << " Roll-Num: " << S1.rollNum<< " CGPA: " << S1.CGPA << endl;
    
    return 0;
}

//Access Modifiers
//----> Public, Private, Protected 
