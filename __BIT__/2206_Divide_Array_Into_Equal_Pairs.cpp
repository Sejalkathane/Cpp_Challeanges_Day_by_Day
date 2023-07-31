// You are given an integer array nums consisting of 2 * n integers.

// You need to divide nums into n pairs such that:
// Each element belongs to exactly one pair.
// The elements present in a pair are equal.
// Return true if nums can be divided into n pairs, otherwise return false.

// Example 1:
// Input: nums = [3,2,3,2,2,2]
// Output: true
// Explanation:
// There are 6 elements in nums, so they should be divided into 6 / 2 = 3 pairs.
// If nums is divided into the pairs (2, 2), (3, 3), and (2, 2), it will satisfy all the conditions.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {3, 2, 3, 2, 2, 2, 2};
    bool a = true;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n; i += 2)
    {
        if ((nums[i] ^ nums[i + 1]) != 0)
        {
            a = false;
            break;
        }
    }
    if (a == true)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;





    //map
     // unordered_map<int,int>mp;
      // for(int i=0;i<n;i++)
      // {
      //   mp[nums[i]]++;
      // }

      // for(auto a:mp)
      // {
      //   if(a.second%2!=0)
      //   {
      //     return false;
      //   }
      // }
      // return true;
}