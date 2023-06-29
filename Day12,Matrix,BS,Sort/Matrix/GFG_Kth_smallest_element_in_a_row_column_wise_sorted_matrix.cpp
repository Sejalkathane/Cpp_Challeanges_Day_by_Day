#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int m = 4;
    int arr[n][m] = {{10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 50}};
    int k = 2;

    // vector<int> v;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         v.push_back(arr[i][j]);
    //     }
    // }

    // sort(v.begin(), v.end());

    // cout<< v[k - 1];

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        // if num is less than the first element then no more element in matrix
        // further are less than or equal to num
        if (arr[i][0] > k)
        {
            return ans;
        }
        // if num is greater than last element, it is greater than all elements
        // in that row
        if (arr[i][n - 1] <= k)
        {
            ans += n;
            continue;
        }
        // This contain the col index of last element in matrix less than of equal
        // to num
        int greaterThan = 0;
        for (int jump = n / 2; jump >= 1; jump /= 2)
        {
            while (greaterThan + jump < n &&
                   arr[i][greaterThan + jump] <= k)
            {
                greaterThan += jump;
            }
        }

        ans += greaterThan + 1;
    }
    cout << ans;

    return 0;
}