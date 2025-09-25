#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student{
    private:
        string name;
        int age;
    public:
        void setDets(){
            cout << "Enter name: ";
            getline(cin , name);
            cout << "Enter age: ";
            cin >> age;
            cin.ignore();
        }
        void getDets(){
            cout << "Name: " << name << ", Age: " << age << endl;
        }
        string getName() { return name; }
        int getAge() { return age; }
};

int main() {
    Student s1;
    s1.setDets();

    ofstream fout("student.txt", ios::app);
    fout << s1.getName() << " " << s1.getAge() << endl;
    fout.close();

    cout << "\nData written to file!\n";

    ifstream fin("student.txt");
    string n; int a;
    cout << "\n--- Students from File ---\n";
    while (fin >> n >> a) {
        cout << "Name: " << n << ", Age: " << a << endl;
    }
    fin.close();

    return 0;
}