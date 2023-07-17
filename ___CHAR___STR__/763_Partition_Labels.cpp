#include <bits/stdc++.h>
using namespace std;

// You are given a string s. We want to partition the string into as many parts as possible so that each letter appears in at most one part.
// Note that the partition is done so that after concatenating all the parts in order, the resultant string should be s.
// Return a list of integers representing the size of these parts.

// Example 1:

// Input: s = "ababcbacadefegdehijhklij"
// Output: [9,7,8]
// Explanation:
// The partition is "ababcbaca", "defegde", "hijhklij".
// This is a partition so that each letter appears in at most one part.
// A partition like "ababcbacadefegde", "hijhklij" is incorrect, because it splits s into less parts.

int main()
{

    // related to merge interval

    string s = "ababcbacadefegdehijhklij";
    // {ababcbaca}  {defegde}  {hijhklij}
    //  |       |     |    |      |    |
    // 0        8    10    15    18    23

    unordered_map<char, int> mp;

    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]] = i; // store index of it
    }

    int maxi = 0;
    int prev = -1;
    vector<int> v;
    for (int i = 0; i < s.size(); i++)
    {
        maxi = max(maxi, mp[s[i]]);
        if (maxi == i)
        {
            v.push_back(maxi - prev);
            prev = maxi;
        }
    }

    for (auto a : v)
    {
        cout << a << " ";
    }
}