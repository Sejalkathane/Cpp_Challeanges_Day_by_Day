// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
// If target is not found in the array, return [-1, -1].
// You must write an algorithm with O(log n) runtime complexity.

// Example 1:
// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // not present then return -1;
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 7;
    int n = nums.size();

    int ans = -1;
    vector<int> v;

    // first occurance is always present on left side thats why we move high
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {

            high = mid - 1;
        }
    }
    v.push_back(ans);

    // Second occurance is always present on righ side thats why we move low

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] == target)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {

            high = mid - 1;
        }
    }

    v.push_back(ans);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}