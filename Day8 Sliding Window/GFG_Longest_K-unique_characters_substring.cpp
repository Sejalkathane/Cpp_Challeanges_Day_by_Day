#include<bits/stdc++.h>
using namespace std;

int main()
{
     // your code here

     string s="aabacbebebe";
     int k=3;
    int n=s.size();
    unordered_map<char,int>mp;
    int i=0;
    int j=0;
    int mx=-1;
    
    while(j<n)
    {
       mp[s[j]]++;
       
       if(mp.size()==k)
       {
           mx=max(mx,j-i+1);
       }
       else if(mp.size()>k)
       {
           while(mp.size()>k)
           {
               mp[s[i]]--;
               if(mp[s[i]]==0)
               {
                   mp.erase(s[i]);
               }
               i++;
           }
       }
       j++;
       
    }
    
   cout<<mx;
    
    
    return 0;
}