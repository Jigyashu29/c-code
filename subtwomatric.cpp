#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], sub[10][10];
    int r, c;

    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    cout << "Enter first matrix elements:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter second matrix elements:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }

    // Subtract two matrices
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    cout << "Subtraction of two matrices:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << sub[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}