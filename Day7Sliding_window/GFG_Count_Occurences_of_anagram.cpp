#include <bits/stdc++.h>
using namespace std;

// Given a word pat and a text txt.
// Return the count of the occurrences of anagrams of the word in the text.

int main()
{
    string t = "forxxorfxdofr";
    string p = "for";

    unordered_map<char, int> mp;

    for (auto a : p)
    {
        mp[a]++;
    }

    int count = mp.size();
    int tlen = t.length();
    int k = p.length();
    int i = 0, j = 0;
    int ans = 0;

    while (j < tlen)
    {
        if (mp.find(t[j]) != mp.end())
        {
            mp[t[j]]--;

            if (mp[t[j]] == 0)
                count--;
        }
        

        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            if (count == 0)
            {
                ans++;
            }
            if (mp.find(t[i]) != mp.end())
            {
                //incremant countas it is
                mp[t[i]]++;
                if (mp[t[i]] == 1)
                     count++;
            }
            
            i++;
            j++;
        }
    }
    cout << ans;

    return 0;
}