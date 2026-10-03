#include <iostream>
using namespace std;

int main() {
    float cp, sp;

    cout << "Enter Cost Price: ";
    cin >> cp;

    cout << "Enter Selling Price: ";
    cin >> sp;

    if (sp > cp) {
        cout << "Profit = " << sp - cp;
    }
    else if (cp > sp) {
        cout << "Loss = " << cp - sp;
    }
    else {
        cout << "No Profit, No Loss";
    }

    return 0;
}