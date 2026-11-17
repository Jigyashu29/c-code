#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10];
    int r1, c1, r2, c2;
    bool equal = true;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    cout << "Enter first matrix:\n";
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            cin >> a[i][j];

    cout << "Enter second matrix:\n";
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            cin >> b[i][j];

    if(r1 != r2 || c1 != c2)
        equal = false;
    else
    {
        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c1; j++)
            {
                if(a[i][j] != b[i][j])
                {
                    equal = false;
                    break;
                }
            }
        }
    }

    if(equal)
        cout << "Matrices are Equal";
    else
        cout << "Matrices are Not Equal";

    return 0;
}