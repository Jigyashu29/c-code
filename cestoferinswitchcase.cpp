#include <iostream>
using namespace std;

int main() {
    int choice;
    float c, f;

    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter Celsius: ";
            cin >> c;
            f = (c * 9 / 5) + 32;
            cout << "Fahrenheit = " << f;
            break;

        case 2:
            cout << "Enter Fahrenheit: ";
            cin >> f;
            c = (f - 32) * 5 / 9;
            cout << "Celsius = " << c;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}