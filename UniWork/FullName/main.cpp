#include "Name.h"
using namespace std;

int main() {
    Name n1("Momina", "Imran");
    Name n2;
    n1.print();

    n2.setName("Zuniii", "Ikram");
    cout << "First: " << n2.getFirstName() << endl;
    cout << "Last: " << n2.getLastName() << endl;
    n2.print();
    
    return 0;
}
