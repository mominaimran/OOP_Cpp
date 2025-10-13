#include "Student.h"

int main() {
    Student s1;

    cout << "Enter student details:\n";
    cin >> s1;   // uses overloaded >> operator

    cout << "\nStudent Information:\n";
    cout << s1;  // uses overloaded << operator

    return 0;
}



// 💬 “Pass by reference avoids useless copies.
// const & = use the real thing safely.
// Returning & = enable chaining.”