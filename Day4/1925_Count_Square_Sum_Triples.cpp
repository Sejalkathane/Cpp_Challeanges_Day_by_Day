#include<bits/stdc++.h>
using namespace std;

// A square triple (a,b,c) is a triple where a, b, and c are integers and a2 + b2 = c2.
// Given an integer n, return the number of square triples such that 1 <= a, b, c <= n.

// Example 1
// Input: n = 5
// Output: 2
// Explanation: The square triples are (3,4,5) and (4,3,5)

// Input: n = 10
// Output: 4

int main()
{
    int n=5;
     int res=0;
        for(int i=1;i<=n;i++)
       {
        for(int j=i+1;j<=n;j++)
        {
            double tmp=sqrt(i*i+j*j);
            if(int(tmp)==tmp && tmp<=n)
                res+=2;
        }
       } 
       cout<<res;
    return 0;
}