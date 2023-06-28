#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>nums={3, 4, 4, 7, 8, 10};
    int n=nums.size();
    int x=3;

    int low=0;
    int high=n-1;
    int fl,ci;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(nums[mid]==x)
        {
            fl=nums[mid];
            ci=nums[mid];
            
            cout<<"floor is : " <<fl<<" , Ceil is :"<<ci;
            return 0;
        }
        if(nums[mid]<x)
        {
            fl=nums[mid];
            low=mid+1;
        }
        else
        {
            ci=nums[mid];
            high=mid-1;
        }

    }
    cout<<"floor is : " <<fl<<" , Ceil is :"<<ci;
}