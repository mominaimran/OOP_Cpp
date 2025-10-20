#include <iostream>
#include <chrono>
#include <thread>
#include "Distance.h"
using namespace std;

// 🎨 COLORS
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m"

// 💫 BOX UTILITY FUNCTION
void printBoxed(string title, string color = CYAN) {
    string border(38, '=');
    cout << color << "\n" << border << RESET << endl;
    cout << BOLD << color << title << RESET << endl;
    cout << color << border << "\n" << RESET;
}

// ⚙️ Continuous spinner animation
void spinner(string message, int durationMs = 2000) {
    const char spinChars[] = {'|', '/', '-', '\\'};
    int spinCount = sizeof(spinChars) / sizeof(spinChars[0]);

    cout << BLUE << message << " " << RESET;
    auto start = chrono::steady_clock::now();

    while (chrono::duration_cast<chrono::milliseconds>(chrono::steady_clock::now() - start).count() < durationMs) {
        for (int i = 0; i < spinCount; ++i) {
            cout << "\b" << BLUE << spinChars[i] << RESET << flush;
            this_thread::sleep_for(chrono::milliseconds(150));
        }
    }
    cout << "\b " << endl; // clears last spinner char
}

int main() {
    Distance d1, d2, result;
    float scalar;
    int choice;
    char again;

    printBoxed("SIMPLE DISTANCE CALCULATOR");

    do {
        cout << YELLOW << "\nEnter First Distance:\n" << RESET;
        cin >> d1;

        printBoxed("Choose an Operation", MAGENTA);

        cout << MAGENTA
             << " 1. Add another distance (+)\n"
             << " 2. Subtract another distance (-)\n"
             << " 3. Multiply by a number (*)\n"
             << " 4. Divide by a number (/)\n"
             << " 5. Compare two distances (<, >, ==)\n"
             << " 6. Exit\n"
             << RESET;

        cout << CYAN << "Enter your choice(1-6): " << RESET;
        cin >> choice;

        printBoxed("Processing...", BLUE);
        spinner("Please wait", 2000); // ⏳ Continuous visible spinner

        switch (choice) {
        case 1:
            cout << YELLOW << "\nEnter second distance:\n" << RESET;
            cin >> d2;
            result = d1 + d2;
            cout << GREEN << "\nResult: " << result << RESET << endl;
            break;

        case 2:
            cout << YELLOW << "\nEnter second distance:\n" << RESET;
            cin >> d2;
            result = d1 - d2;
            cout << GREEN << "\nResult: " << result << RESET << endl;
            break;

        case 3:
            cout << CYAN << "\nEnter number to multiply: " << RESET;
            cin >> scalar;
            result = d1 * scalar;
            cout << GREEN << "\nResult: " << result << RESET << endl;
            break;

        case 4:
            cout << CYAN << "\nEnter number to divide: " << RESET;
            cin >> scalar;
            result = d1 / scalar;
            cout << GREEN << "\nResult: " << result << RESET << endl;
            break;

        case 5:
            cout << YELLOW << "\nEnter second distance:\n" << RESET;
            cin >> d2;
            cout << MAGENTA << "\nComparison Result: " << RESET;
            if (d1 == d2)
                cout << GREEN << "Both are equal." << RESET << endl;
            else if (d1 < d2)
                cout << BLUE << "First distance is smaller." << RESET << endl;
            else
                cout << RED << "First distance is greater." << RESET << endl;
            break;

        case 6:
            printBoxed("Exiting Program... Goodbye!", RED);
            return 0;

        default:
            cout << RED << "\nInvalid choice! Try again..." << RESET << endl;
        }

        cout << CYAN << "\nDo you want to perform another operation? (y/n): " << RESET;
        cin >> again;

    } while (again == 'y' || again == 'Y');

    printBoxed("Thanks for using Distance Calculator!", GREEN);
    return 0;
}
