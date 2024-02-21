#include <bits/stdc++.h>
using namespace std;

void SubSum(int index, vector<int> &ds, vector<int> &arr, int n, vector<int> &v)
{
    if (index == n)
    {
        int sum = 0;
        for (int i = 0; i < ds.size(); i++)
        {
            sum += ds[i];
        }
        v.push_back(sum);
        return;
    }

    ds.push_back(arr[index]);
    SubSum(index + 1, ds, arr, n, v);
    ds.pop_back();

    SubSum(index + 1, ds, arr, n, v);
}

int main()
{
    vector<int> arr = {5, 2, 1};
    int n = arr.size();

    vector<int> ds;
    vector<int> v;
    SubSum(0, ds, arr, n, v);

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}