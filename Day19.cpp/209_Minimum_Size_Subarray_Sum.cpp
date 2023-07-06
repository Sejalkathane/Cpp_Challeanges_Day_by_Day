#include<bits/stdc++.h>
using namespace std;

int main()
{
    // ..retun size;
    vector<int>nums={2,3,1,2,4,3};
    int k=7;

    int i=0,j=0,sum=0;
    int res=INT_MAX;
    int n=nums.size();

    while(j<n)
    {
        sum+=nums[j];
        if(sum<k)
        {
            j++;
        }
        else
        {
            while(sum>=k)
            {
                res=min(res,(j-i+1));
                sum-=nums[i];
                i++;
            }
            j++;
        }
    }

    if(res==INT_MAX)
    {
        cout<<0;
        return 0;
    }
    else cout<<res;


    return 0;
}