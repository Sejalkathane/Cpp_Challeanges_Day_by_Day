#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums={0,1,0,1,0,1,99};

     unordered_map<int,int>mp;
      for(auto i:nums)
      {
        mp[i]++;
      }

      for(auto i:mp)
      {
        if(i.second==1)
        {
          cout<<i.first;
          return 0;
        }
      }
}

