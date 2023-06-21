#include <bits/stdc++.h>
using namespace std;

// Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.
// Return the sum of the three integers.
// You may assume that each input would have exactly one solution.
// Example 1:

// Input: nums = [-1,2,1,-4], target = 1
// Output: 2
// Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

int main()
{
    vector<int>nums={-1,1,1,-4};
    int target=1;
    int n = nums.size();
    if (n < 3)
    {
        return 0;
    }

    //***********************
    int closest = nums[0] + nums[1] + nums[2];
    //***********************

    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    set<vector<int>> set;
    bool t=false;
    for (int a = 0; a < n - 2; a++)
    {
        int b = a + 1;
        int c = n - 1;

        while (b < c)
        {
            int sum = nums[a] + nums[b] + nums[c];
            if (sum == target)
            {
                cout<<sum<<endl;
                t=true;
                break;
            }

            // ********************
            if (abs(target - sum) < abs(target - closest))
            {
                closest = sum;
            }
            //*********************

            if (sum < target)
            {
                b++;
            }
            else
            {
                c--;
            }
        }
    }
    if(t=false)
    {
       cout<<closest;
    }
}