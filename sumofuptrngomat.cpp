#include <iostream>
using namespace std;

int main()
{
    int a[10][10], n, sum = 0;

    cout << "Enter order of matrix: ";
    cin >> n;

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i <= j)
                sum += a[i][j];
        }
    }

    cout << "Sum of upper triangular elements = " << sum;

    return 0;
}