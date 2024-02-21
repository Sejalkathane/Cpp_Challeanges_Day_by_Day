#include <bits/stdc++.h>
using namespace std;

// Input:
// N = 3
// W = 4
// values[] = {1,2,3}
// weight[] = {4,5,1}
// Output: 3

// recursion::

// int knapsack(vector<int> &wt, vector<int> &vl, int w, int n)
// {
//     if (w == 0 || n == 0)
//         return 0;

//     if (wt[n - 1] < w) // then two possiblity include or not
//     {
//         return max(vl[n - 1] + knapsack(wt, vl, w - wt[n - 1], n - 1), knapsack(wt,vl,w,n-1));
//     }
//     else if(wt[n-1]>w)
//     {
//         return knapsack(wt,vl,w,n-1);
//     }
//     return 0;
// }

// memoisation::

int knapsack(vector<int> wt, vector<int> val, int w, int n, vector<vector<int>> &dp)
{
    if (n == 0 || w == 0)
    {
        return 0;
    }

    if (dp[n][w] != -1)
        return dp[n][w];

    if (wt[n - 1] <= w)
    {
        return dp[n][w] = max(val[n - 1] + knapsack(wt, val, w - wt[n - 1], n - 1, dp), knapsack(wt, val, w, n - 1, dp));
    }
    else
    {
        return dp[n][w] = knapsack(wt, val, w, n - 1, dp);
    }
}

int main()
{
    int n = 3;
    int w = 7;

    vector<int> value = {1, 3, 4, 5};
    vector<int> weight = {1, 4, 5, 7};

    vector<vector<int>> dp(n + 1, vector<int>(w + 1, -1));

    cout << knapsack(weight, value, w, n, dp);
    // cout<<knapsack(weight, value, w, n);

    return 0;
}