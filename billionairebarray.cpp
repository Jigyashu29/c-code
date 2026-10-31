#include <iostream>
using namespace std;

int main() {
    char name[] = "I AM BILLIONAIRE";

    cout << "Name: ";

    for (int i = 0; name[i] != '\0'; i++) {
        cout << name[i];
    }

    return 0;
}