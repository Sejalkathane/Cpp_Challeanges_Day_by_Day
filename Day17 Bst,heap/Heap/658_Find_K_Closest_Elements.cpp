#include<bits/stdc++.h>
using namespace std;

// An integer a is closer to x than an integer b if:

// |a - x| < |b - x|, or
// |a - x| == |b - x| and a < b

int main()
{
    vector<int>v={1,2,3,4,5};
    int k=4;
    int x=3;
   
    vector<int>ans;
    priority_queue<pair<int,int>>pq;
    for(int i=0;i<v.size();i++)
    {
        pq.push(make_pair(abs(v[i]-x),v[i]));

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

     //if needed in sorted fassion
    sort(ans.begin(),ans.end());
    
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    
}