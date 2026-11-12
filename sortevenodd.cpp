#include <iostream>
#include <algorithm>
using namespace std;

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

    // Sort even elements
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] % 2 == 0 && arr[j] % 2 == 0 && arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    // Sort odd elements
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] % 2 != 0 && arr[j] % 2 != 0 && arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}