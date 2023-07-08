#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word = "a123bc34d8ef34";

    // unordered_map<string, int> mp;
    unordered_set<string>s;

    for (int i = 0; i < word.size(); i++)
    {
        if (isdigit(word[i]))
        {
            string str;
            while (word[i] == '0')
            {
                i++;
            }
            while (isdigit(word[i]))
            {
                str += word[i];
                i++;
            }
            // mp[str]++;
            s.insert(str);
        }
    }
    cout << s.size();
}