#include <bits/stdc++.h>
using namespace std;

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    int n = nums.size();



    // TWO POINTER APPROCH
    int low = 0;
    int high = n - 1;

    vector<int> v1, v2;
    v1 = nums;
    sort(v1.begin(), v1.end());
    while (low != high)
    {
        int p = v1[low] + v1[high];
        if (p == target)
        {
            break;
        }
        else if (p > target)
        {
            high--;
        }
        else
        {
            low++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (v1[low] == nums[i])
        {
            v2.push_back(i);
        }
        if (v1[high] == nums[i])
        {
            v2.push_back(i);
        }
    }
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }


//oooooooooooooooooo>>>>>>>>><<<<<<<<<<<<<<<<>>>>>>>>>>>>><<<<<<<<>>>>>>>>>>ooooooooooooooooooooooo


    // //  HASH TABLE METHOD O(n)
    // if we find element in then push_back index

    // vector<int> v;
    // unordered_map<int, int> mp;

    // int n = nums.size();

    // bool t = false;
    // for (int i = 0; i < n; i++)
    // {
    //     if (mp.find(target - nums[i]) != mp.end())
    //     {
    //         v.push_back(i);
    //         v.push_back(mp[target - nums[i]]);
    //         t = true;
    //     }
    //     if (t == true)
    //     {
    //         for (int i = 0; i < v.size(); i++)
    //         {
    //             cout << v[i] << " ";
    //         }
    //         break;
    //     }
    //     mp[nums[i]] = i;
    // }
    return 0;
}