#include<bits/stdc++.h>
using namespace std;

//given range like low=300 high=400 find palindrome between them


bool ispal(int n)
{
    int res=0;
    int org=n;
    while(n>0)
    {
        res=res*10+n%10;
        n=n/10;
    }
    if(res==org)
       return true;
    
    return false;
}

int main()
{
    vector<int>v;
    int low=30;
    int high=400;

    for(int i=low;i<=high;i++)
    {
        if(ispal(i)==true)
        {
           v.push_back(i);      
        }
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}