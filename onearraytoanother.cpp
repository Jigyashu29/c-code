#include <iostream>
using namespace std;

int main()
{
    int arr1[100], arr2[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    // Copy elements
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    cout << "Elements of second array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}