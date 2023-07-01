#include <bits/stdc++.h>
using namespace std;

// Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

// Example 1:

// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
 vector<vector<int>> v;

void permutation(vector<int> nums, int i, int n)
{
    if(i==n)
    {
        v.push_back(nums);
        return;
    }
    for(int j=i;j<=n;j++)
    {
        swap(nums[i],nums[j]);
        permutation(nums,i+1,n);
        swap(nums[i],nums[j]);
    }
}

int main()
{
    vector<int> nums;
    int i = 0;
    int n = nums.size();

    permutation(nums, 0, n);
    
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[0].size();j++)
        {
            cout<<v[i][j];
        }
    }
}