#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int, int>> v = {{1, 2, 3, 4},
                                  {4, 3, 2, 1},
                                  {7, 8, 9, 6},
                                  {13, 5, 4, 3}};

    int n = v.size();
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || (i + j == n - 1))
            {
                if (maxi < v[i][j])
                {
                    maxi = v[i][j];
                }
            }
        }
    }
    cout << maxi;
    return 0;
}