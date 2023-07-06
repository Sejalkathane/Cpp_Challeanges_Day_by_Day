#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string key = "the quick brown fox jumps over the lazy dog";
    // string message = "vkbs bs t suepuv";

    string key = "eljuxhpwnyrdgtqkviszcfmabo";
    string message = "zwx hnfx lqantp mnoeius ycgk vcnjrdb";

    map<char, char> mp;
    char temp = 'a';
    for (int i = 0; i < key.length(); i++)
    {
        if (key[i] != ' ' && mp.find(key[i]) == mp.end())
        {
            mp[key[i]] = temp;
            temp++;
        }
    }

    string res = "";

    for (int i = 0; i < message.size(); i++)
    {
        if (message[i] != ' ')
        {
            res += mp[message[i]];
        }
        else
        {
            res += ' ';
        }
    }

    cout << res;
}