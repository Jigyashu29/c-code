#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    cout << "Enter three angles: ";
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0 && a + b + c == 180) {
        cout << "Valid Triangle";
    }
    else {
        cout << "Invalid Triangle";
    }

    return 0;
}