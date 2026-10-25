#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    switch ((n > 0) - (n < 0)) {
        case 1:
            cout << "Positive Number";
            break;

        case -1:
            cout << "Negative Number";
            break;

        case 0:
            cout << "Zero";
            break;
    }

    return 0;
}