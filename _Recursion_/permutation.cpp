#include <bits/stdc++.h>
using namespace std;

void permute(int index, vector<int> &nums, vector<vector<int>> &ans)
{
    int n = nums.size();
    if (index == n)
    {
        ans.push_back(nums);
    }

    for (int i = index; i < n; i++)
    {
        swap(nums[index], nums[i]);
        permute(index + 1, nums, ans);
        swap(nums[index], nums[i]);
    }
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    permute(0, nums, ans);

    for ( auto i : ans)
    {
        for ( auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}