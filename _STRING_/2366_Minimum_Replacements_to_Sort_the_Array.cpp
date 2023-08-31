#include <bits/stdc++.h>
using namespace std;

// Approach is simple just try to dry run after understanding the solution :)

// Start traversing from the end of array

// if current no is divisible by the previous number and suppose
// current no is a, and prev no is b,
// the we must need to divide current number(a) to a/b-1 times

// suppose current number is 9 and previous number is 3,
// then we can divide it into 9/3 times-1,
// in this case prev remains same (No need to update)

// now suppose if prev number is not divisible by current number,
// suppose current is 7 prev is 5,
// so we can divide 7 into
// 2 ,5
// 3, 4
// out of this 3,4 is best choice ,

// and for every element we have to add noOfTime to our ans,
// i.e, no of times we need to divide a current element,

// what is reason behind for finding prev by prev=nums[i]/noOfTime; how it find best fit
// suppose a number is 10 and we have to divide it into 3 times,
// then our aim is to make minimum no from these three as maximum as possible,
// but why ??
// suppose array is 3 10 4
// then our ans is , 2
// because we divide 10 into 3 pieces i.e, 3 3 4
// but what if i divide it into 2 4 4, ?
// still the answer is 2 ???
// No answers is 3 now,

// to select the minimum no out of these 3 partition number,
// we make prev=nums[i]/noOfTime;
// means prev=10/3 , i.e, (3)

long long minimumReplacement(vector<int> &nums)
{
    int n = nums.size();

    long long ans = 0, prev = nums[n - 1];

    // traverse from last
    for (int i = n - 2; i >= 0; i--)
    {
        // ex 9 can devide 3 into 3 3 3
        int no_of_time = nums[i] / prev;

        // but 10 in 2 4 4
        if (nums[i] % prev != 0)
        {
            no_of_time++;
            prev = nums[i] / no_of_time;
        }
        ans += no_of_time - 1;
    }

    return ans;
}
int main()
{
    vector<int> v = {3, 9, 3};
    cout << minimumReplacement(v);

    return 0;
}

// You are given a 0-indexed integer array nums. In one operation you can
//  replace any element of the array with any two elements that sum to it.

// For example, consider nums = [5,6,7]. In one operation, we can replace
// nums[1] with 2 and 4 and convert nums to [5,2,4,7].

// Return the minimum number of operations to make an array that is
// sorted in non-decreasing order.

// Example 1:

// Input: nums = [3,9,3]
// Output: 2
// Explanation: Here are the steps to sort the array in non-decreasing order:
// - From [3,9,3], replace the 9 with 3 and 6 so the array becomes [3,3,6,3]
// - From [3,3,6,3], replace the 6 with 3 and 3 so the array becomes [3,3,3,3,3]
// There are 2 steps to sort the array in non-decreasing order. Therefore, we return 2.

// Example 2:

// Input: nums = [1,2,3,4,5]
// Output: 0
// Explanation: The array is already in non-decreasing order. Therefore, we return 0.