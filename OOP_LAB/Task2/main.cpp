#include "Circle.h"
#include "Cylinder.h"

int main() {
    Circle c(4);
    Cylinder cyl(2, 5);

    cout << "==== Circle ====\n";
    c.print();

    cout << "\n=== Cylinder ===\n";
    cyl.print();

    return 0;
}
