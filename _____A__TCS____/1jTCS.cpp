#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "ABACD";
    string s2 = "CDABA";

    string str = s + s;

    if (str.find(s2))
    {
        cout << true;
    }
    else
    {
        cout << false;
    }
}