#include <bits/stdc++.h>
using namespace std;

// You are given a 0-indexed, strictly increasing integer array nums and a positive integer diff. A triplet (i, j, k) is an arithmetic triplet if the following conditions are met:

// i < j < k,
// nums[j] - nums[i] == diff, and
// nums[k] - nums[j] == diff.
// Return the number of unique arithmetic triplets.

// Example 1:

// Input: nums = [0,1,4,6,7,10], diff = 3
// Output: 2
// Explanation:
// (1, 2, 4) is an arithmetic triplet because both 7 - 4 == 3 and 4 - 1 == 3.
// (2, 4, 5) is an arithmetic triplet because both 10 - 7 == 3 and 7 - 4 == 3.

// Input: nums = [4,5,6,7,8,9], diff = 2
// Output: 2

int main()
{
    vector<int> nums = {0, 1, 4, 6, 7, 10};
    int diff = 3;

    
    int cnt = 0;
    unordered_map<int, bool> mp;

    for (int i = 0; i < nums.size(); i++)
        mp[nums[i]] = true;

    for (int i = 0; i < nums.size(); i++)
    {
        if (mp[nums[i] - diff] && mp[nums[i] + diff])
            cnt++;
    }
    cout << cnt;

    return 0;
}