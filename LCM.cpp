#include <iostream>
using namespace std;

int main() {
    int a, b, lcm;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    lcm = (a > b) ? a : b;

    while (lcm % a != 0 || lcm % b != 0) {
        lcm++;
    }

    cout << "LCM = " << lcm;

    return 0;
}