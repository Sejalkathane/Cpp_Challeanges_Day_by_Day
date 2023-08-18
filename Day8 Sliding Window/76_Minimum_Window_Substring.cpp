#include <bits/stdc++.h>
using namespace std;

string minWindow(string s, string t)
{
    int n = s.size();

    if (s == t)
        return s;

    unordered_map<int, int> mp;
    // put in map
    for (auto i : t)
    {
        mp[i]++;
    }

    // inslize same size as above map size()
    int count = mp.size();

    int i = 0, j = 0;
    int start = 0;
    // run j till s length
    int mini = INT_MAX;

    while (j < n)
    {
        if (mp.find(s[j]) != mp.end())
        {
            mp[s[j]]--;

            if (mp[s[j]] == 0)
            {
                count--;
            }
        }

        // window hit
        while (count == 0)
        {
            if (mini > j - i + 1)
            {
                mini = j - i + 1;
                start = i;
            }
            // srink window
            if (mp.find(s[i]) != mp.end())
            {
                mp[s[i]]++;
                if (mp[s[i]] > 0)
                {
                    count++;
                }
            }

            i++;
        }
        j++;
    }
    if (mini == INT_MAX)
    {
        return "";
    }

    return s.substr(start, mini);
}

int main()
{
    string s="ADOBECODEBANC";
    string t="ABC";
   cout<< minWindow(s,t);

    return 0;
}