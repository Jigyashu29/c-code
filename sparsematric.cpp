#include <iostream>
using namespace std;

int main()
{
    int a[10][10], r, c, count = 0;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter matrix elements:\n";

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> a[i][j];

            if(a[i][j] == 0)
                count++;
        }
    }

    if(count > (r * c) / 2)
        cout << "Sparse Matrix";
    else
        cout << "Not a Sparse Matrix";

    return 0;
}