#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string str = "zzkdkkszzdzfkk";
    string str="abcdefghijklabcdefghijkl"; //all having equal ferquency then choose smallest lexographycally char
    int n = str.size();

    // find frequency
    unordered_map<char, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[str[i]]++;
    }
    int ans = 0;
    char v = 0;
    for (auto a : mp)
    {
        if (a.second > ans)
        {
            ans = a.second;
            v = a.first;
        }
    }

    // to handel same frequency
    vector<char> vi;
    for (auto a : mp)
    {
        if (a.second == ans)
        {
            vi.push_back(a.first);
        }
    }

    // lexecographycilly condition
    int c = vi[0];
    for (int i = 0; i < vi.size(); i++)
    {
        if (vi[i] < c)
        {
            c = vi[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (str[i] == c)
        {
            str[i] = 'x';
        }
    }

    cout << str;
}