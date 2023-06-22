// Given an array of distinct integers arr, find all pairs of elements with the minimum absolute difference of any two elements.

// Return a list of pairs in ascending order(with respect to pairs), each pair [a, b] follows
// a, b are from arr
// a < b
// b - a equals to the minimum absolute difference of any two elements in arr

// Example 1:
// Input: arr = [4,2,1,3]
// Output: [[1,2],[2,3],[3,4]]
// Explanation: The minimum absolute difference is 1. List all pairs with difference equal to 1 in ascending order.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {3, 8, -10, 23, 19, -4, -14, 27};

    sort(arr.begin(), arr.end());
    vector<vector<int>> res;
    int min_diff = INT_MAX;

    for (int i = 0; i < arr.size() - 1; ++i)
    {
        min_diff = min(arr[i + 1] - arr[i], min_diff);
    }

    for (int i = 0; i < arr.size() - 1; ++i)
    {
        if (arr[i + 1] - arr[i] == min_diff)
            res.push_back({arr[i], arr[i + 1]});
    }

    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[0].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}