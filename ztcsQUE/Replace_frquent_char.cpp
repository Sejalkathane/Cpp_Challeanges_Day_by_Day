#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "jjkdkksjjdjf";
    int n = str.size();

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

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'j')
        {
            str[i] = 'x';
        }
    }
    cout << str;
}