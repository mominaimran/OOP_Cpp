// 🔹 Real-World Example: University System 🎓
// Person (base class)
// Student (inherits from Person)
// Employee (inherits from Person)
// TeachingAssistant (inherits from both Student + Employee)
// 👉 Isme ek side pe multilevel bhi hai (Person → Student → TA), aur ek side pe multiple inheritance bhi hai (Student + Employee → TA).

#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
{
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a)
    {
        name = n;
        age = a;
    };
    void showPerson()
    {
        cout << "Name: " << " Age: " << age << endl;
    }
};

// Derived class 1
class Student : public virtual Person
{
protected:
    int rollNum;

public:
    void setStudent(string n, int a, int r)
    {
        setPerson(n, a);
        rollNum = r;
    }
    void showStudent()
    {
        showPerson();
        cout << "Roll No: " << rollNum << endl;
    }
};

// Derived class 2
class Employee : virtual public Person
{
protected:
    int empID;
    double salary;

public:
    void setEmployee(string n, int a, int id, double s)
    {
        setPerson(n, a);
        empID = id;
        salary = s;
    }
    void showEmployee()
    {
        showPerson();
        cout << "Employee ID: " << empID << ", Salary: " << salary << endl;
    }
};

// Derived from both Student + Employee
class TeachingAssistant : public Student, public Employee
{
    string course;

public:
    void setTA(string n, int a, int r, int id, double s, string c)
    {
        setPerson(n, a);
        rollNum = r;
        empID = id;
        salary = s;
        course = c;
    }
    void showTA()
    {
        showPerson();
        cout << "Roll No: " << rollNum << endl;
        cout << "Employee ID: " << empID << ", Salary: " << salary << endl;
        cout << "Assists in Course: " << course << endl;
    }
};

int main()
{
    TeachingAssistant ta;
    ta.setTA("Momina", 20, 123, 501, 20000, "Programming Fundamentals");

    cout << "--- Teaching Assistant Details ---" << endl;
    ta.showTA();

    return 0;
}

// 🟣 Hybrid Inheritance
// 🔹 What?
// Hybrid inheritance = do ya zyada inheritance types ko combine karna ek hi system me.
// Matlab kabhi multiple, kabhi multilevel, kabhi hierarchical → all-in-one.
// Isse real-world complex hierarchies model hoti hain.

// 🔹 Why?
// Real systems rarely sirf ek type follow karte hain.
// Complex cheezain naturally mix ho jati hain.
// But: Diamond Problem ka risk yahan bhi hota hai, so virtual inheritance zaroori ban sakta hai.