#include <bits/stdc++.h>
using namespace std;

string reorganizeString(string s)
{
    // count char::
    int n = s.size();
    unordered_map<char, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }

    int maxi = 0;
    char freq;
    for (auto a : mp)
    {
        if (a.second > maxi)
        {
            maxi = a.second;
            freq = a.first;
        }
    }
    if (maxi > ((n + 1) / 2))
    {
        return "";
    }

    string ans(n, '_');
    int i = 0;
    while (maxi != 0)
    {
        ans[i] = freq;
        maxi--;
        i += 2;
    }
    mp.erase(freq);

    for (auto a : mp)
    {
        while (a.second > 0)
        {
            if (i >= n)
            {
                i = 1;
            }
            ans[i] = a.first;
            i += 2;
            a.second--;
        }
    }

    return ans;
}

int main()
{
    string s = "aab";
    
    cout<<reorganizeString(s);
}

// Given a string s, rearrange the characters of s so that any two
//  adjacent characters are not the same.

// Return any possible rearrangement of s or return "" if not possible.

// Example 1:
// Input: s = "aab"
// Output: "aba"

// Example 2:
// Input: s = "aaab"
// Output: ""
