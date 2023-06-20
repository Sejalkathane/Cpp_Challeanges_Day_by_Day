#include<bits/stdc++.h>
using namespace std;

bool isSelfDivide(int num)
{
    int temp=num;
    int res=0;

    while(temp)
    {
        res=temp%10;
        if(res==0 || num%res!=0)
            return false;
        
        temp/=10;
    }
    return true;
}

int main()
{
    int left=1,right=22;

    vector<int>v;

    for(int i=left;i<=right;i++)
    {
        if(isSelfDivide(i))
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