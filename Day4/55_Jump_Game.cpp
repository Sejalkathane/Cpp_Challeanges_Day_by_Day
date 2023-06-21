#include <bits/stdc++.h>
using namespace std;

// You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.
// Return true if you can reach the last index, or false otherwise.
// Example 1:
// Input: nums = [2,3,1,1,4]
// Output: true
// Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.

bool canJump(vector<int> &nums)
{
    int mx = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (mx < i)
            return false;
        mx = max(mx, i + nums[i]);
    }
    return true;
}

int main()
{

    vector<int> nums = {2, 3, 1, 1, 4};

    if (canJump(nums))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}