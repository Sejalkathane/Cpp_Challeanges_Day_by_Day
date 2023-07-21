#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s="onlinestudy";
    string s = "sejalkathane";
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = ('z' - s[i]) + 'a'; // ex o therefore:
                                   // (122 - 111)=11+97=108 ie =l
    }

    cout << s;
}