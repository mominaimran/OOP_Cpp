#include "Surgeon.h"

int main() {
    Date d1(2, 12, 2020);
    Surgeon s("Momina", 22, "Heart Surgeon", d1);
    s.showSurgeonInfo();

    return 0;
}
