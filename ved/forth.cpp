#include<bits/stdc++.h>

using namespace std;

int maxCoins(vector<int> &nums)
{
    int n = nums.size();
    nums.insert(nums.begin(), 1);
    nums.insert(nums.end(), 1);

    vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));

    for (int len = 1; len <= n; ++len)
    {
        for (int left = 1; left <= n - len + 1; ++left)
        {
            int right = left + len - 1;
            for (int k = left; k <= right; ++k)
            {
                dp[left][right] = max(dp[left][right],
                                      nums[left - 1] * nums[k] * nums[right + 1] + dp[left][k - 1] + dp[k + 1][right]);
            }
        }
    }

    return dp[1][n];
}

int main()
{
    vector<int> nums;
    
    
    cout << maxCoins(nums) << endl; // Output: 10
    // cout << maxCoins(nums2) << endl; // Output: 167

    return 0;
}
