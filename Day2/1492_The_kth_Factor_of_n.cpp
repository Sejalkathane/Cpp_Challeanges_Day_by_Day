#include<bits/stdc++.h>
using namespace std;


// You are given two positive integers n and k. A factor of an integer n is defined as an integer i where n % i == 0.

// Consider a list of all factors of n sorted in ascending order, return the kth factor in this list or return -1 if n has less than k factors.


int main()
{  
    int n=12,k=5;
     vector<int>v;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                v.push_back(i);
            }
        }
        if(k>v.size())
        {
            cout<<-1;
        }

        cout<<v[k-1];
    
}