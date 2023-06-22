// Given two binary strings a and b, return their sum as a binary string.

// Example 1:
// Input: a = "11", b = "1"
// Output: "100"
// Example 2:

// Input: a = "1010", b = "1011"
// Output: "10101"

// 1+1=10 ,  0+1=1  , 1+0=1  ,1+1+1=11

#include<bits/stdc++.h>
using namespace std;

int main()
{

    string a="11";
    string b="1";

    int alen=a.length();
    int blen=b.length();
    int carry=0;
    int i=0;
    string ans="";

    while(i<alen || i<blen || carry!=0)
    {
       int x=0;
       if(i<alen && a[alen-i-1]=='1')
       {
         x=1;
       }
        
        int y=0;
        if(i<blen && b[blen-i-1]=='1')
        {
            y=1;
        }

        ans=to_string((x+y+carry)%2)+ans;
        carry=(x+y+carry)/2;
        i++;
    }
     
     cout<<ans;
    
    return 0;
}