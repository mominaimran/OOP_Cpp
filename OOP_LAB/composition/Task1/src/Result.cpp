#include "Result.h"

Result::Result(double c, char g){
    CGPA = c;
    grade = g;
}

void Result::displayResult(){
    cout << "Result: " << endl;
    cout << "CGPA: " << CGPA << ", Grade: " << grade << endl;
}