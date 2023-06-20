#include<bits/stdc++.h>
using namespace std;

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