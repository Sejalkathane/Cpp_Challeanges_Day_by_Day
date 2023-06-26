#include <bits/stdc++.h>
using namespace std;

// Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0.
// Example 1:
// Input:
// N = 8
// A[] = {15,-2,2,-8,1,7,10,23}
// Output: 5
// Explanation: The largest subarray with
// sum 0 will be -2 2 -8 1 7.

int main()
{
    vector<int> nums = {15, -2, 2, -8, 1, 7, 10, 23};
    int n = nums.size();

    unordered_map<int, int> mp;
    int maxi = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        // sum
        sum = sum + nums[i];

        // condition if all are 0
        if (sum == 0)
        {
            maxi = i + 1;
        }
        else
        {
            if (mp.find(sum) != mp.end())
            {
                // i =current element - with the location you find sum in map give size of subarray
                maxi = max(maxi, i - mp[sum]);
            }
            else
            {
                mp[sum] = i;
            }
        }
    }

    cout << maxi;
    return 0;
}