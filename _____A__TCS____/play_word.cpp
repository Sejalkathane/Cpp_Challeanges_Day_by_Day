#include <bits/stdc++.h>
using namespace std;

int main()
{
    // length of longest word

    string s = "knowledge is the greatest gift";
    // string s = " ";

    int maxi = INT_MIN;
    int i = 0;
    int j = 0;

    while (j < s.size())
    {
        if (s[j + 1] == ' ')
        {
            maxi = max(maxi, j - i + 1);
            i = j + 1;
            j = i;
        }
        j++;
    }

    cout << maxi;

    return 0;
}