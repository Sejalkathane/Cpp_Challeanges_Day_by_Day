#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>nums={2,-5,1,-4,3,-2};
     int n=nums.size();
      int maxi=INT_MIN;
      int sum=0;
      for(int i=0;i<n;i++)
      {
          sum+=nums[i];
           maxi=max(maxi,sum);
          if(sum<0)
          {
            sum=0;
          }
      }
 

     //conditonn to handle negative no more
      int sum2=0;
      int mini=INT_MAX;
       for(int i=0;i<n;i++)
      {
          sum2+=nums[i];
           mini=min(mini,sum2);
          if(sum2>0)
          {
            sum2=0;
          }
      }
      cout<< max(abs(maxi),abs(mini));
        
}