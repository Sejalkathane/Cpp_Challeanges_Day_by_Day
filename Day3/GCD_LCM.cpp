#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

int main()
{
    int a = 3, b = 1;
    // GCD :

    // while(a!=b)
    // {
    //     if(a>b)
    //     {
    //         a=a-b;
    //     }
    //     else
    //     {
    //         b=b-a;
    //     }
    // }
    // cout<<a;

    cout << gcd(a, b)<<endl;
    //Build_in functin in gcd::





    //Lcm::
    cout<<(a*b)/gcd(a,b);

    return 0;
}