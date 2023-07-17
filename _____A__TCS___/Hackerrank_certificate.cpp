#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> &arr)
{
    int n = arr.size();
    int i = 0;
    int j = 0;
    int maxi = 0; // Initialize maxi to 0
    unordered_map<int, int> mp;

    while (j < n)
    {
        mp[arr[j]]++;
        while (mp.size() > 2 && i<j)
        {
            mp[arr[i]]--;
            if (mp[arr[i]] == 0)
            {
                mp.erase(arr[i]);
            }
            i++;
        }
        if (mp.size() == 2)
        {
            vector<int> v;
            for (auto x : mp)
            {
                v.push_back(x.first);
            }
            if (abs(v[0] - v[1]) <= 1)
            {
                maxi = max(maxi, j-i+ 1);
            }
        }

        j++;
    }
    return maxi;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout << longestSubarray(arr);
}
