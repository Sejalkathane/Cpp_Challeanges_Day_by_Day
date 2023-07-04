#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>nums = {1,1,1,2,2,3,3,5,5,5,5};
    int k = 2;
    int n=nums.size();
    
    vector<int>ans;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[nums[i]]++;
    }

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

    for(auto i=mp.begin();i!=mp.end();i++)
    {
        pq.push(make_pair(i->second,i->first));

        if(pq.size()>k)
        {
            pq.pop();
        }
    }

    while(pq.size()>0)
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

}