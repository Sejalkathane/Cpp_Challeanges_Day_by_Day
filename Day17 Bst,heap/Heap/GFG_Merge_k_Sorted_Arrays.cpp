#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k=3;
    int arr[k][k] = {{1,2,3},{4,5,6},{7,8,9}};
    //better than sort
     vector<int>v;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<k;j++)
            {
                pq.push(arr[i][j]);
            }
        }
        
        while(!pq.empty())
        {
            v.push_back(pq.top());
            pq.pop();
        }
       
       for(int i=0;i<v.size();i++)
       {
        cout<<v[i]<<" ";
       }
}