#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};
    int n=nums.size();
    // Kadaen's Algorithm 
     int sum=0;
     int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum=sum+nums[i];
        mx=max(mx,sum);
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<mx;
    
    return 0;
}