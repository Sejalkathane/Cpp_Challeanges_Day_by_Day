#include<bits/stdc++.h>
using namespace std;

// Given an integer number n, return the difference between the product of its digits and the sum of its digits.
 
int main()
{
    int n=234;

    int res=0;
    int sum=0;
    int pro=1;

    while(n>0)
    {
        res=n%10;
        sum=sum+res;
        pro=pro*res;
        n=n/10;
    }
    cout<<pro-sum;
    
    return 0;
}