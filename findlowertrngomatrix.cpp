#include <iostream>
using namespace std;

int main()
{
    int a[10][10], n;

    cout << "Enter order of matrix: ";
    cin >> n;

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    cout << "Lower Triangular Matrix:\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i >= j)
                cout << a[i][j] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}