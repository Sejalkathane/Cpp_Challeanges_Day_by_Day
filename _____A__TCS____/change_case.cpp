#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "ABCdefgHIJKlmno";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }

    cout<<s;
}