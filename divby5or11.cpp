#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n % 5 == 0 && n % 11 == 0) {
        cout << "Divisible by 5 and 11";
    }
    else {
        cout << "Not divisible by 5 and 11";
    }

    return 0;
}