#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr={7, 10 ,4 ,3 ,20 ,15};
    int n=arr.size();
    int k=3;
       priority_queue<int>pq;
       
       for(int i=0;i<(n+1);i++)
       {
           pq.push(arr[i]);
           
           if(pq.size()>k)
           {
               pq.pop();
           }
       }
      cout<<pq.top();
    
}