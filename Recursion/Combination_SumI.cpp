#include <bits/stdc++.h>
using namespace std;

void find_combo(int index, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
{
    if (index == arr.size())
    {
        if (target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }

    if (arr[index] <= target)
    {
        ds.push_back(arr[index]);
        find_combo(index, target - arr[index], arr, ans, ds);
        ds.pop_back();
    }

    find_combo(index + 1, target, arr, ans, ds);
}

int main()
{
    vector<int> arr = {2, 3, 5};
    int target = 8;

    vector<vector<int>> ans;
    vector<int> ds;

    find_combo(0, target, arr, ans, ds);

    for (auto i : ans)
    {
        for ( auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}