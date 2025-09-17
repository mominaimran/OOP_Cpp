//header file
#pragma once
#include <string>

class Student {
private:
    std::string name;
    std::string regNo;
    int semester;
    std::string batch;
    double gpa;

public:
    void inputDets();
    void displayTableHeader();
    void displayTableRow();
};

