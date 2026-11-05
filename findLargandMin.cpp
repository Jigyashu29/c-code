#include <iostream>
using namespace std;

void findMaxMin(int arr[], int n, int i, int &max, int &min)
{
    if (i == n)
        return;

    if (arr[i] > max)
        max = arr[i];

    if (arr[i] < min)
        min = arr[i];

    findMaxMin(arr, n, i + 1, max, min);
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

    int max = arr[0];
    int min = arr[0];

    findMaxMin(arr, n, 0, max, min);

    cout << "Maximum element = " << max << endl;
    cout << "Minimum element = " << min;

    return 0;
}