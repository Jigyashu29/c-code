#include <iostream>
using namespace std;

int main()
{
    int a[10][10], n, temp;

    cout << "Enter order of matrix: ";
    cin >> n;

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    for(int i = 0; i < n; i++)
    {
        temp = a[i][i];
        a[i][i] = a[i][n-i-1];
        a[i][n-i-1] = temp;
    }

    cout << "Matrix after interchanging diagonals:\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}