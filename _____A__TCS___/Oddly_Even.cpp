#include <bits/stdc++.h>
using namespace std;

int main()
{
    // long long int n=9834698765123;
    // long long int n = 4567;
    // vector<long long int> v;
    // while (n > 0)
    // {
    //     v.push_back(n % 10);
    //     n = n / 10;
    // }
    // reverse(v.begin(), v.end());

    // // position
    // int odd = 0;
    // int even = 0;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         even += v[i];
    //     }
    //     else if (i % 2 != 0)
    //     {
    //         odd += v[i];
    //     }
    // }
    // cout << abs(odd - even);

    // use string

    string s = "9834698765123";

    // position
    int odd = 0;
    int even = 0;

    for (int i = 0; i < s.size(); i++)
    {
        
        if (i % 2 == 0)
        {
            even +=s[i]-48; //for ascii value
        }
        else if (i % 2 != 0)
        {
            odd += s[i]-48;
        }
    }
    cout << abs(odd - even);
}