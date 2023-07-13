#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> interval(vector<vector<int>> &v, vector<vector<int>> &mergeint)
{
    if (v.size() == 0)
        return mergeint;

    sort(v.begin(), v.end());
    vector<int> tempint = v[0];

    for (auto a : v)
    {
        if (a[0] <= tempint[1])
        {
            tempint[1] = max(a[1], tempint[1]);
        }
        else
        {
            mergeint.push_back(tempint);
            tempint = a;
        }
    }
    mergeint.push_back(tempint);
    return mergeint;
}

int main()
{
    vector<vector<int>> v = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    vector<vector<int>> mergeint;
    interval(v, mergeint);
    for (auto i : mergeint)
    {
        for (auto j : i)
        {
            cout<< j <<" ";
        }
        cout << endl;
    }

    return 0;
}