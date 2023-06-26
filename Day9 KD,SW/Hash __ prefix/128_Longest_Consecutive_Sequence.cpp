#include <bits/stdc++.h>
using namespace std;

// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
// You must write an algorithm that runs in O(n) time.

// Example 1:

// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
// Example 2:

// Input: nums = [0,3,7,2,5,8,4,6,0,1]
// Output: 9

int main()
{
    vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    int n = nums.size();

    // O(n log (n))  ======== :::NAIVE APPROCH:::=========
    // case for leetcode
    // if (n == 0)
    // {
    //     return 0;
    // }
    // sort(nums.begin(), nums.end());

    // int count = 1, mx = 0;
    // for (int i = 1; i < n; i++)
    // {
    //     if (nums[i] != nums[i - 1])
    //     {
    //         //find consecutive
    //         if (nums[i] == nums[i - 1] + 1)
    //         {
    //             count++;
    //         }
    //         else
    //         {
    //             mx = max(mx, count);
    //             count = 1;
    //         }
    //     }
    // }
    // cout << max(mx, count);

    //    ===========:::EFFICENT APPROCH:::=============

    unordered_set<int> s(nums.begin(), nums.end());
    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        if (s.find(nums[i] - 1) != s.end())
        {
            continue;
            // move on
        }
        else 
        {
            int count=0;
            int curr_el=nums[i];

            while(s.find(curr_el)!=s.end())
            {
               count++;
               curr_el++;
            }
            mx=max(mx,count);
        }
    }
 cout<<mx;
    return 0;
}