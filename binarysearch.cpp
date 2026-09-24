#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key;

    cout << "Enter number to search: ";
    cin >> key;

    int low = 0, high = 4;
    bool found = false;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << "Element found at index " << mid;
            found = true;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found)
        cout << "Element not found";

    return 0;
}