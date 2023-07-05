#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> &nums)
{
    int n = nums.size();
    int i = 0;
    int j = 0;

    int zero = 0;
    int maxi = INT_MIN;
    while (j < n)
    {
        if (nums[j] == 0)
            zero++;
        while (zero > 1)
        {
            if (nums[i] == 0)
            {
                zero--;
            }
            i++;
        }
        // - zero because we have to find only one in ranje
        maxi = max(maxi, j - i + 1 - zero);
        j++;
    }
    return (maxi == n) ? maxi - 1 : maxi;
}


int main()
{
   vector<int>nums={0,1,1,1,0,1,1,0,1};
   cout<<longestSubarray(nums);
    return 0;
}


// Input: nums = [0,1,1,1,0,1,1,0,1]
// Output: 5
// Explanation: After deleting the number in position 4,
// [0,1,1,1,1,1,0,1] longest subarray with value of 1's is
//  [1,1,1,1,1].