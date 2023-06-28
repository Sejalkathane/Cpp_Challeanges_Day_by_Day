#include<bits/stdc++.h>
using namespace std;


//  Given an array of strings strs, group the anagrams together. You can return the answer in any order.
//  An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
// Example 1:

// Input: strs = ["eat","tea","tan","ate","nat","bat"]
// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

int main()
{

    vector<string>str={"eat","tea","tan","ate","nat","bat"};
    int n=str.size();
     
     vector<vector<string>>ans;
     unordered_map<string,vector<string>>mp;

     for(int i=0;i<n;i++)
     {
        string s=str[i];
        sort(str[i].begin(),str[i].end());
        mp[str[i]].push_back(s);
     }

     for(auto a:mp)
     {
        ans.push_back(a.second);
     }

 
   for(int i=0;i<ans.size();i++)
   {
    int j;
    for(j=0;j<ans[0].size();j++)
    {
        cout<<ans[i][j]<<endl;
    }
   }




    
    return 0;
}