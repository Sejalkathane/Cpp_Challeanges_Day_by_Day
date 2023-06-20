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
    int a = 32, b = 44;
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





    //Lcm::
    cout<<(a*b)/gcd(a,b);

    return 0;
}