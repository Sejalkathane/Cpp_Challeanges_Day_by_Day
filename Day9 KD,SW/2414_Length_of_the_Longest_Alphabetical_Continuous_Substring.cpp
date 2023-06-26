#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abacaba";
    int n = s.length();
    int i = 0,j=0;
    int mx=1;

    while (j < n)
    {
        if (s[j + 1] - s[j] == 1)
        {
            j++;
            mx = max(mx, j - i + 1);
        }
        else
        {
            j++;
            i = j;
        }
    } 
    cout << mx;

    return 0;
}