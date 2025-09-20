#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;
public:
    void setPerson(string n, int a) {
        name = n; age = a;
    }
    void showPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Child 1
class Student : public Person {
    int rollNo;
public:
    void setStudent(string n, int a, int r) {
        setPerson(n, a);
        rollNo = r;
    }
    void showStudent() {
        showPerson();
        cout << "Roll No: " << rollNo << endl;
    }
};

// Child 2
class Teacher : public Person {
    string subject;
public:
    void setTeacher(string n, int a, string sub) {
        setPerson(n, a);
        subject = sub;
    }
    void showTeacher() {
        showPerson();
        cout << "Teaches: " << subject << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    s.setStudent("Momina", 22, 123);
    t.setTeacher("Sir Ali", 40, "Computer Science");

    cout << "--- Student Details ---" << endl;
    s.showStudent();

    cout << "\n--- Teacher Details ---" << endl;
    t.showTeacher();
}


// 🟣 Hierarchical Inheritance
// 🔹 What?
// Hierarchical inheritance = ek single parent class se multiple child classes inherit karte hain.
// Socha jaise ek tree 🌳:
// Root = Parent class.
// Branches = Different child classes.

// 🔹 Why?
// Jab ek common base entity ho jo multiple variations mein exist karti ho.
// Code reuse + har child apna apna unique kaam kare.