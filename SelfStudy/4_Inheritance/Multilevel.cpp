#include <iostream>
#include <string>
using namespace std;

// Base class (Grandparent)
class Person {
protected:
    string name;
public:
    void setName(string n) { name = n; }
    void showName() { cout << "Name: " << name << endl; }
};

// Derived from Person (Parent)
class Student : public Person {
protected:
    int rollNo;
public:
    void setRollNo(int r) { rollNo = r; }
    void showRollNo() { cout << "Roll No: " << rollNo << endl; }
};

// Derived from Student (Child)
class GraduateStudent : public Student {
    string thesisTopic;
public:
    void setThesis(string topic) { thesisTopic = topic; }
    void showDetails() {
        showName();
        showRollNo();
        cout << "Thesis Topic: " << thesisTopic << endl;
    }
};

int main() {
    GraduateStudent g;
    g.setName("Momina");
    g.setRollNo(123);
    g.setThesis("AI in Education");
    g.showDetails();
}


// 🟣 Multilevel Inheritance
// 🔹 What?
// Multilevel inheritance = ek chain hoti hai.
// Ek class ek parent se inherit karti hai.
// Phir ek aur class us child se inherit karti hai.
// Yani grandparent → parent → child structure.

// 🔹 Why?
// Jab cheezain step-by-step specialize hoti hain.
// Har new level pe naye features add ho jate hain without rewriting old code.
// Code reusability + logical hierarchy.