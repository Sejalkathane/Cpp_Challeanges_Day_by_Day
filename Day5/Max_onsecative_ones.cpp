#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>nums={0,1,1,1,0,1,1,1,1,0,0,1,1,0};
    int n=nums.size();
 
    int mx=0;
        int count=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==1)
        {
            count++;
            mx=max(mx,count);
        }
        else
        {
            count=0;
        }
    }
    cout<<mx;
    return 0;
}