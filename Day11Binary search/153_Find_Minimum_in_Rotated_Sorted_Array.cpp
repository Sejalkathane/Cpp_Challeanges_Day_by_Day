#include<bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int>nums={1,2,3,4,5,6,7};
    vector<int>nums={4,5,6,7,0,1,2};
    
    int low=0;
    int high=nums.size()-1;
    
   //dry run once
    while(low<high)
    {
        int mid=(low+high)/2;
        //we need to check if this condition true then we know that we definitely get our answer on right hand side only
        if(nums[mid]>nums[high])
        {
            low=mid+1;
        }
        //if this condition true then we definitly know that we get our answer on left side or at present case
        else if(nums[mid]<nums[high])
        {
            high=mid;
        }
    }
    cout<<nums[high];
}