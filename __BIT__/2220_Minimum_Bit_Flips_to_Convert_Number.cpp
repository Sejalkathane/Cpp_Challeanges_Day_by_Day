#include<bits/stdc++.h>
using namespace std;

int main()
{
    int start=10;
    int goal=7;

    int count=0;

    int n=start^goal;
    
    while(n!=0)
    {
        if((n&1)==1)
           count++;
        n=n>>1;
    }

    cout<<count;
}