#include <iostream>
using namespace std;

void printArray(int arr[], int n, int i)
{
    if (i == n)
        return;

    cout << arr[i] << " ";

    printArray(arr, n, i + 1);
}

int main()
{
    int arr[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    printArray(arr, n, 0);

    return 0;
}