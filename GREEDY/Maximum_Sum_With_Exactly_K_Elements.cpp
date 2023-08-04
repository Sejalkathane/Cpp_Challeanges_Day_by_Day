#include <bits/stdc++.h>
using namespace std;

int maximizeSum(vector<int> &nums, int k)
{
    int mx = 0;

    for (auto a : nums)
        mx = max(mx, a);

    int ans = 0;
    while (k--)
    {
        ans += mx;
        mx++;
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 3;
    cout<<maximizeSum(nums,k);
}