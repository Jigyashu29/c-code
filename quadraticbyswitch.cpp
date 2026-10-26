#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, D;

    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Not a quadratic equation";
        return 0;
    }

    D = b * b - 4 * a * c;

    switch ((D > 0) - (D < 0)) {
        case 1:
            cout << "Root 1 = " << (-b + sqrt(D)) / (2 * a) << endl;
            cout << "Root 2 = " << (-b - sqrt(D)) / (2 * a);
            break;

        case 0:
            cout << "Equal roots = " << -b / (2 * a);
            break;

        case -1:
            cout << "Complex roots = "
                 << -b / (2 * a) << " + "
                 << sqrt(-D) / (2 * a) << "i and "
                 << -b / (2 * a) << " - "
                 << sqrt(-D) / (2 * a) << "i";
            break;
    }

    return 0;
}