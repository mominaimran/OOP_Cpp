#include "Student.h"

Student::Student(string n, int g)
{
    name = n;
    GPA = g;
    for (int i = 0; i < 5; i++)
    {
        arr[i] = 0;
    }
}

istream &operator>>(istream &in, Student &s)
{
    cout << "Enter name: ";
    getline(in >> ws, s.name);
    cout << "Enter gpa: ";
    in >> s.GPA;
    cout << "\n Enter marks of 5 subjects: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << " marks: ";
        in >> s.arr[i];
    }
    return in;
}

ostream &operator<<(ostream &out, Student &s)
{
    out << "\n===== Student Info =====\n";
    out << "Name: " << s.name << ", GPA: " << s.GPA << endl;
    out << "Marks: \n";
    for (int i = 0; i < 5; i++)
    {
        out << s.arr[i] << " ";
        out << endl;
    }
    return out;
}

int &Student::operator[](int index)
{
    if (index < 0 || index >= 5)
    {
        cout << "Invalid index! Returning arr[0]." << endl;
        return arr[0];
    }
    return arr[index];
}
