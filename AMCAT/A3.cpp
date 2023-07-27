// 3
// 44
// 555
// 6666
// 555
// 44
// 3

// Programming Pattern to Print 2*N Number of rows for input Pattern?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    int k = n;
    
    for (int i = 1; i <= n + 1; i++)
        cout << n + 1 << " ";
    cout << endl;

    for (int i = 1; i <= n; i++)
    {

        for (int j = n; j >= i; j--)
        {
            cout << k << " ";
        }
        k--;
        cout << endl;
    }

    return 0;
}