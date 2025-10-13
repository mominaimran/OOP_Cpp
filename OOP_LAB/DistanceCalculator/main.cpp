#include <iostream>
#include "Distance.h"
using namespace std;

int main() {
    Distance d1, d2, result;
    float scalar;
    int choice;
    char again;

    cout << "\n--- Simple Distance Calculator ---" << endl;

    do {
        cout << "\nEnter first distance:\n";
        cin >> d1;

        cout << "\nChoose an operation(1-5):\n";
        cout << "1. Add another distance (+)\n";
        cout << "2. Subtract another distance (-)\n";
        cout << "3. Multiply by a number (*)\n";
        cout << "4. Divide by a number (/)\n";
        cout << "5. Compare two distances (<, >, ==)\n";
        cout << "6. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "\nEnter second distance:\n";
            cin >> d2; //d2.getDist();
            result = d1 + d2;
            cout << "\nResult: " << result << endl; //overload insertion op
            break;

        case 2:
            cout << "\nEnter second distance:\n";
            cin >> d2;
            result = d1 - d2;
            cout << "\nResult: " << result << endl;
            break;

        case 3:
            cout << "\nEnter number to multiply: ";
            cin >> scalar;
            result = d1 * scalar;
            cout << "\nResult: ";
            result.showDist();
            break;

        case 4:
            cout << "\nEnter number to divide: ";
            cin >> scalar;
            result = d1 / scalar;
            cout << "\nResult: " << result << endl;
            break;

        case 5:
            cout << "\nEnter second distance:\n";
            cin >> d2;
            cout << "\nComparison Result: ";
            if (d1 == d2)
                cout << "Both are equal." << endl;
            else if (d1 < d2)
                cout << "First distance is smaller." << endl;
            else
                cout << "First distance is greater." << endl;
            break;

        case 6:
            cout << "\nExiting program..." << endl;
            return 0;

        default:
            cout << "\nInvalid choice! Try again..." << endl;
        }

        cout << "\nDo you want to perform another operation? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "\nThanks for using Distance Calculator!\n";
    return 0;
}
