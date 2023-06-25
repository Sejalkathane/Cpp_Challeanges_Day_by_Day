#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 5, 4, 2, 9, 9, 9};
    int k = 3;

    unordered_map<int, int> mp;
    int n = nums.size();
    int i = 0;
    int j = 0;
    long long sum = 0;
    long long mx = INT_MIN;

    while (j < n)
    {
        sum += nums[j];
        mp[nums[j]]++;

        if (j - i + 1 == k)
        {
            if (mp.size() == k)
            {
                mx = max(mx, sum);
            }
            sum -= nums[i];
            mp[nums[i]]--;
            if (mp[nums[i]] == 0)
            {
                mp.erase(nums[i]);
            }
            i++;
        }
        j++;
    }
    if (mx == INT_MIN)
    {
        cout << 0;
    }
    else
    {
        cout << mx;
    }
    return 0;
}