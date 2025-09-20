#include <iostream>
using namespace std;

class LivingBeing {
public:
    void breathe() {
        cout << "Breathing..." << endl;
    }
};

class Person : virtual public LivingBeing {};
class Employee : virtual public LivingBeing {};

class Teacher : public Person, public Employee {};

int main() {
    Teacher t;
    // ❌ Ambiguity!
    t.breathe(); 
}


// 🔹 Setup
// Diamond problem tab aata hai jab multiple inheritance ke parents ka ek common parent ho.
// Example:
// LivingBeing (has breathe() method).
// Person inherits from LivingBeing.
// Employee inherits from LivingBeing.
// Teacher inherits from both Person and Employee.