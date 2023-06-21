#include <bits/stdc++.h>
using namespace std;

// Given an integer array nums, return all the triplets
//       [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation:
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<vector<int>> res;
    set<vector<int>> s;

    for (int a = 0; a < n - 2; a++)
    {
        int b = a + 1;
        int c = n - 1;

        while (b < c)
        {
            int sum = nums[a] + nums[b] + nums[c];
            if (sum == 0)
            {
                s.insert({nums[a], nums[b], nums[c]});
                b++;
                c--;
            }
            else if (sum < 0)
            {
                b++;
            }
            else
            {
                c--;
            }
        }
    }
    for (auto i : s)
    {
        res.push_back(i);
    }

    int row=res.size();
    int col=res[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <col; j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}