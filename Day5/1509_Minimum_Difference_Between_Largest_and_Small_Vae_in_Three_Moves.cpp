// You are given an integer array nums.
// In one move, you can choose one element of nums and change it to any value.
// Return the minimum difference between the largest and smallest value of nums after performing at most three moves.

// Example 1:
// Input: nums = [5,3,2,4]
// Output: 0
// Explanation: We can make at most 3 moves.
// In the first move, change 2 to 3. nums becomes [5,3,3,4].
// In the second move, change 4 to 3. nums becomes [5,3,3,3].
// In the third move, change 5 to 3. nums becomes [3,3,3,3].
// After performing 3 moves, the difference between the minimum and maximum is 3 - 3 = 0.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 5, 0, 10, 14};
    int n = nums.size();
    if (n <= 4)
    {
        return 0;
    }

    sort(nums.begin(), nums.end());
    
    // kill 3 smallest elements
    // kill 3 biggest elements
    // kill 1 biggest elements + 2 smallest elements
    // kill 2 biggest elements + 1 smallest elements
    // 1st
    int res = nums[n - 1] - nums[3];
    // 2nd
    res = min(res, nums[n - 4] - nums[0]);
    // 3rd
    res = min(res, nums[n - 2] - nums[2]);
    // 4th
    res = min(res, nums[n - 3] - nums[1]);
    return res;

    return 0;
}
