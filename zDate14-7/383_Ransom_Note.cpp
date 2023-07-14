#include <bits/stdc++.h>
using namespace std;

bool canConstruct(string r, string m)
{
    //  int count[26]={};

    //   for(char c:m)
    //   {
    //       count[c-'a']++;
    //   }

    //   for(char c:r){
    //      if(!count[c-'a']--)
    //          return false;
    // }
    //   return true;

    unordered_map<char,int>mp;
    
    //put in map
    for(char ch:m)  mp[ch]++;

    for(char ch :r)
    {
        if(mp[ch]>0)
        {
            mp[ch]--;
        }
        else
        {
            return false;
        }
    }
    return true;

}

int main()
{
    // string r = "aa";
    // string m = "aab";
     string r = "aa";
    string m = "ab";

    cout<< canConstruct(r, m);
    return 0;
}