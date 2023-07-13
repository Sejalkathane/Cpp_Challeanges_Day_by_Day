#include <bits/stdc++.h>
using namespace std;

// 2
// 4
// 10 20 30 10
// 3
// 10 50 10

//recursion
// int fun(int index, vector<int> &heights)
// {
//     if (index == 0)
//         return 0;
//     int left = fun(index - 1, heights) + abs(heights[index] - heights[index - 1]);
//     int right = INT_MAX;
//     if (index > 1)
//         right = fun(index - 2, heights) + abs(heights[index] - heights[index - 2]);

//     return min(left, right);
// }

// int main()
// {
//     vector<int> heights = {10, 20, 30, 10};
//     int n = heights.size();
//     cout<<fun(n - 1, heights);
// }







int fun(int index, vector<int> &heights,vector<int>&dp)
{
    if (index == 0)
        return 0;
    
    if(dp[index]!=-1)  return dp[index];
    int left = fun(index - 1, heights,dp) + abs(heights[index] - heights[index - 1]);
    int right = INT_MAX;
    if (index > 1)
        right = fun(index - 2, heights,dp) + abs(heights[index] - heights[index - 2]);

    return dp[index]=min(left, right);
}

int main()
{
    vector<int> heights = {10, 20, 30, 10};
    int n = heights.size();

    vector<int>dp(n+1,-1);
    cout<<fun(n - 1, heights,dp);
}
