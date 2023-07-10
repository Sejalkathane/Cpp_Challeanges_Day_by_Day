// same as fibo
//  You are climbing a staircase. It takes n steps to reach the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

// Example 1:
// Input: n = 2
// Output: 2
// Explanation: There are two ways to climb to the top.
// 1. 1 step + 1 step
// 2. 2 steps
// Example 2:

// Input: n = 3
// Output: 3
// Explanation: There are three ways to climb to the top.
// 1. 1 step + 1 step + 1 step
// 2. 1 step + 2 steps
// 3. 2 steps + 1 step

#include <bits/stdc++.h>
using namespace std;

int find(vector<int> &dp, int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    if (dp[n] != -1)
        return dp[n];
    return dp[n] = find(dp, n - 1) + find(dp, n - 2);
}

int main()
{
    int n = 3;
    vector<int> dp(n + 1, -1);
    cout << find(dp, n);
}