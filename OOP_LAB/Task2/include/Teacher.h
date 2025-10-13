#ifndef TEACHER_H
#define TEACHER_H
#include <string>
using namespace std;

class Teacher {
private:
    string name;
    string subject;
public:
    Teacher();
    Teacher(string n, string s);
    void display();
};

#endif
