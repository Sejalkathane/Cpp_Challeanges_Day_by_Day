#include<bits/stdc++.h>
using namespace std;

// Given a string s, find the length of the longest 
// substring
//  without repeating characters.

 

// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.


//without repeating means substring size == map.size();
int main()
{
    string s="abcabcbb";
    int n=s.size();
        int i=0;
        int j=0;
        int mx=0;

        unordered_map<char,int>mp;
        while(j<n)
        {
           mp[s[j]]++;
          
           if(j-i+1==mp.size())
           {
              mx=max(mx,(j-i+1));
           }
           else if(mp.size() < (j-i+1))
           {
               while(mp.size()<(j-i+1))
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
}