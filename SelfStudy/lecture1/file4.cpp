#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    string name;
    int age;

    void input(){
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    int n;
    cout << "Enter no. of students you want to add: ";
    cin >> n;
    Student* students = new Student[n];

    //input details
    for (int i = 0; i < n; i++){
        cout << "\nStudent " << i + 1 << " details:\n";
        students[i].input();
    }

    //display details
    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < n; i++){
        students[i].display();
    }

    delete[] students;

    return 0;
}