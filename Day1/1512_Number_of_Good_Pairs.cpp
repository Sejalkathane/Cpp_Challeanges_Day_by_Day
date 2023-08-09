#include<bits/stdc++.h>
using namespace std;

// Given an array of integers nums, return the number of good pairs.
// A pair (i, j) is called good if nums[i] == nums[j] and i < j.

int main()
{
    int nums[]={1,2,3,1,1,3};
    int n = sizeof(nums) / sizeof(nums[0]);
    
    // cout<<n;

    int x=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          if(nums[i]==nums[j])
          {
              x++;
          }
        }
    }

    cout<<x;
    return 0;
}