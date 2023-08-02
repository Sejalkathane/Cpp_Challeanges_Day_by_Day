// Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

// Example 1:

// Input: nums = [1,2,3]
// Output: 6

#include <bits/stdc++.h>
using namespace std;

int maximumProduct(vector<int> &nums)
{

    // first we sort array
    sort(nums.begin(), nums.end());
    // find the size of nums
    int n = nums.size();

    int res1, res2;
    //   for example we have sorted array

    res1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
    res2 = nums[0] * nums[1] * nums[n - 1];

    return max(res1, res2);
}

int main()
{
   vector<int>nums={1,2,3};
   cout<<maximumProduct(nums);
}
