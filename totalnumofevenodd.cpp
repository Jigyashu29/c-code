#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    int even = 0, odd = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Total Even Elements = " << even << endl;
    cout << "Total Odd Elements = " << odd;

    return 0;
}