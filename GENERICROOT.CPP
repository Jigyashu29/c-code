#include <iostream>
using namespace std;

int main() {
    int n, sum;

    cout << "Enter a number: ";
    cin >> n;

    while (n >= 10) {
        sum = 0;

        while (n > 0) {
            sum = sum + n % 10;
            n = n / 10;
        }

        n = sum;
    }

    cout << "Generic Root = " << n;

    return 0;
}