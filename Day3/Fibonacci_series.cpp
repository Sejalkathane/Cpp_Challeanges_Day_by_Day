#include<bits/stdc++.h>
using namespace std;

//recursion way
// fib(n-1)+fib(n-2) ==> condition if(n<=1) return n;

int main()
{
    //number till we find fibonacci series
    int n=8;

    if(n==0)
    {
        cout<<0;
    }
    else if(n==1)
    {
       cout<<0<<" "<<1;
    }
    else
    {
        int fib[n+1];
        fib[0]=0;
        fib[1]=1;

        for(int i=2;i<=n;i++)
        {
            fib[i]=fib[i-2]+fib[i-1];
        }

        for(int i=0;i<n+1;i++)
        {
            cout<<fib[i]<<" ";
        }

    }

    return 0;
}