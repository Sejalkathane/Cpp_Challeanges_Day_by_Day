#include <bits/stdc++.h>
using namespace std;

int main()
{ // print only frequencies of lowercase character

    string s = "AssaaVaafCbVDDbb";
    int n = s.size();
    unordered_map<char, int> mp;

    for (char i : s)
    {
        if (i >= 97 && i <= 123)
        {
            mp[i]++;
        }
    }
    for (auto a : mp)
    {
        cout << a.first << " " << a.second << endl;
    }

    return 0;
}