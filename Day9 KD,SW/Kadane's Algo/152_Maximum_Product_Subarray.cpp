#include <bits/stdc++.h>
using namespace std;

// Given an integer array nums, find a subarray that has the largest product, and return the product
// The test cases are generated so that the answer will fit in a 32-bit integer.

// Example 1:
// Input: nums = [2,3,-2,4]
// Output: 6
// Explanation: [2,3] has the largest product 6.

int main()
{
    vector<int> nums = {2, 3, -2, 4};
    int n = nums.size();
    int maxi = 0;
    int pro = 1;

    // simple kadaen's
    for (int i = 0; i < n; i++)
    {
        pro *= nums[i];
        maxi = max(maxi, pro);
        if (pro == 0)
        {
            pro = 1;
        }
    }

    // traverse from right also
    //help to find out product when it having ony one negative number
    pro=0;
    for (int i = n - 1; i >= 0; i--)
    {
        pro *= nums[i];
        maxi = max(maxi, pro);
        if (pro == 0)
        {
            pro = 1;
        }
    }

    cout << maxi;

    return 0;
}

// The Approach to this question is exactly same as Kadane's Algo the only differece is, we will be traversing the array from both sides i.e left to right ( lets say the max prod is maxi1 ) and from right to left ( say max prod is maxi2 ), now the final answer will we max of maxi1 and maxi2.

// ****************************
// Ques : Why do we have a need to traverse from right to left ??
// Ans : lets take an example
// arr {-8,5,3,1,6}
// *****************************

// // By traversing left to right we have an answer maxi1.
// maxi1 = -720 , which is clearly not the max prod value.
// -> The whole concept lies in this statement - As we can see that there is only 1 negative no. ( if we consider that no. then the final answer can never be positive ), therefore to avoid this situation we also traverse from right to left to get the final maximum prod.
