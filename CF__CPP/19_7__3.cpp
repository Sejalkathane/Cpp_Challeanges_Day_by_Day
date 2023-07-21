#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count = 0;
        int maxi = INT_MIN;
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            if (mp.find(arr[i]) != mp.end())
            {
                count--;
                mp.erase(arr[i]);
            }
            else
            {
                mp[arr[i]]++;
                 count++;
            }
            maxi = max(maxi, count);
        }
        cout << maxi << endl;
    }
}
