#include <bits/stdc++.h>
using namespace std;

// To print the pattern like
// for n=3
// the program should print
// 1 1 1 2
// 3 2 2 2
// 3 3 3 4

int main()
{
    int n = 5;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (i % 2 != 0 && j == n - 1)
            {
                cout << i + 1 << " ";
            }
            else if (i % 2 == 0 && j == 1)
            {
                cout << i + 1 << " ";
            }
            else
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}