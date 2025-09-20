#include <iostream>
#include <string>
using namespace std;

//example without diamond problem
//parent 1
class Person{
    protected:
        string name;
        int age;
    public:
        void setPersonDets(string n, int a){
            name = n;
            age = a;
        }
        void showPersonDets(){
            cout << "Name: " << name << " Age: " << age << endl;
        }
};

//parent 2
class Employee{
    protected:
        int empID;
        double salary;
    public:
        void setEmployeeDets(int id, double s) {
            empID = id; salary = s;
        }
        void showEmployeeDets() {
            cout << "Employee ID: " << empID << ", Salary: " << salary << endl;
        }
};

//child class inheriting from both
class Teacher : public Person, public Employee{
        string subject;
    public:
        void setSubject(string s){
            subject = s;
        }
        void showDets(){
            showPersonDets();
            showEmployeeDets();
            cout << "Teaches: " << subject << endl;
        }
};

int main() {
    Teacher t;
    t.setPersonDets("momina" ,22);
    t.setEmployeeDets(123, 200);
    t.setSubject("computer science");
    t.showDets();

    return 0;
}