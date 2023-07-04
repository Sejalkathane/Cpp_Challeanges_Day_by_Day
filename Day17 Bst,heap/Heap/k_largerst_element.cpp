#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr={1,23,12,9,30,2,50};
    int k=3;
    int n=arr.size();
    priority_queue <int, vector<int>, greater<int> > pq;        
        for(int i=0;i<n;i++)
        {
            pq.push(arr[i]);
            
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<int>v;
        
    while(!pq.empty())
    {
        v.push_back(pq.top());
        pq.pop();
    }
    reverse(v.begin(),v.end());
    

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}