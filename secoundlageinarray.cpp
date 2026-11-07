#include <iostream>
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

    int largest = arr[0];
    int second = -999999;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] < largest)
        {
            second = arr[i];
        }
    }

    if (second == -999999)
        cout << "Second largest element does not exist";
    else
        cout << "Second largest element = " << second;

    return 0;
}