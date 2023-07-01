#include<bits/stdc++.h>
using namespace std;

int main()
{
    // string s="AABBBCBBAC";
    string s="GEEKSGEEKSFOR";
      int i=0;int j=0;
    
    // make a unordered map
    unordered_map<int,int>mp;

    // put in a map
    for(auto i:s)
    {
        mp[i]=1;
    }


    int ans=s.size();
    // 
    int count=mp.size();
    int n=s.size();

    while(j<n)
    {
        if(mp[s[j]]>0)
        {
            count--;
        }
        mp[s[j++]]--;
        while(count==0)
        {
            ans=min(ans,j-i);
            if(++mp[s[i++]]>0)
            {
                count++;
            }
        }
    }
    cout<<ans;


}