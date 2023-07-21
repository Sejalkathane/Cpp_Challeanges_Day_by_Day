#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1st test case
    //  string s="juhfmd";
    //  int k=2;

    // 2nd test case
    //  string s="usyp";
    //  int k=4;

    // 3rd test case
    string s = "abcd";
    int k = 3;

    // 4th test case
    //  string s="aaa";
    //  int k=2;

    if (s[0] - k > 'a')
    {
        s[0] = s[0] - k;
    }
    else
    {
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] - k >= 'a')
            {
                s[i] = s[i] - k;
                break;
            }
        }
    }

    cout << s;
}
