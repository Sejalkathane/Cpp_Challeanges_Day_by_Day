#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="abababab";
    int n = s.size();
    for (int i = n / 2; i >= 1; i--)
    {
        if (n % i == 0)
        {
            if (s.substr(0, n - i) == s.substr(i))
                cout<<true;
                return 0;
        }
    }
    cout<<false;

}