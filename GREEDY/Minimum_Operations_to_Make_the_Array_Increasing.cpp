#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int> &nums)
{
    int n = nums.size();
    int sum = 0;
    if (n == 1)
        return 0;
    int c = 0;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] <= nums[i - 1])
        {
            sum += abs(nums[i - 1] + 1 - nums[i]);
            nums[i] = nums[i - 1] + 1;
        }
    }
    return sum;
}

int main()
{
    vector<int> nums = {1, 5, 2, 4, 1};
    cout<<minOperations(nums);
}