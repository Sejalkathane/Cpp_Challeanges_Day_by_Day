#include<bits/stdc++.h>
using namespace std;

//give a number 121 check palindrome or not
int main()
{
    int n=1221;
    int org=n;
    int res=0;
    while(n>0)
    {
       res=res*10+n%10;
       n=n/10;
    }

    if(res==org)
    {
        cout<<"Palindrome";
    }
    else
    {
       cout<<"NOT A PLALINDROME";
    }
    
    return 0;
}