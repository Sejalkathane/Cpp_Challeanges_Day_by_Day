#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=70;
    int bin=0,rem,pro=1;

    while (n!=0)
    {
        rem=n%2;
        bin=bin+(rem*pro);
        n=n/2;
        pro*=10;
    }
    cout<<bin;
    
    return 0;
}