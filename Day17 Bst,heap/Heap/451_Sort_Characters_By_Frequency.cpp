#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "tree";

    unordered_map<char,int>mp;

    for(auto i:s)
    {
        mp[i]++;
    }

    priority_queue<pair<int,int>>pq;
    
    for(auto i:mp)
    {
        pq.push(make_pair(i.second,i.first));
    }

    string str="";

    while(!pq.empty())
    {
        str=str+string(pq.top().first,pq.top().second);
        pq.pop();
    }

   cout<<str;
   
}