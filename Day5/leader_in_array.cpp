#include <bits/stdc++.h>
using namespace std;

// leader is element having no greater element on its right;
int main()
{
    // {7,10,4,3,6,5,2}
    //{10,20,30}
    // vector<int> arr = {30, 20, 10, 5, 2};
    vector<int> arr = {7, 10, 4, 3, 6, 5, 2};
    int n = arr.size();

    int mx = INT_MIN;
    vector<int> v;
    for (int i = n - 1; i >= 0; i--)
    {
        if (mx < arr[i])
        {
            v.push_back(arr[i]);
            mx = arr[i];
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}