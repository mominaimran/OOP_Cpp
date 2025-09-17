#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int rollNum;
    double CGPA;

public:
    // Setters
    void setName(string x) {
        name = x;
    }
    void setrollNum(int x) {
        rollNum = x;
    }
    void setCGPA(double x) {
        CGPA = x;
    }

    // Getters
    void getName() {
        cout << name << endl;
    }
    void getrollNum() {
        cout << rollNum << endl;
    }
    void getCGPA() {
        cout << CGPA << endl;
    }
};

int main() {
    Student S1;
    S1.setName("Momina");
    S1.setrollNum(5889);
    S1.setCGPA(3.9);

    S1.getName();
    S1.getrollNum();
    S1.getCGPA();

    cout << "Size of S1 object: " << sizeof(S1) << " bytes" << endl;

    return 0;
}
