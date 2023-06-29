#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a={2, 2, 3, 4, 5};
    vector<int>b={1, 1, 2, 3, 4};
    int n=a.size();
    int m=b.size();

      int i=0,j=0,last=INT_MIN;
       vector<int> ans;
       while(i<=n-1 && j<=m-1)
       {
          if(a[i]<=b[j])
          {
              if(a[i]!=last)
              {
                  ans.push_back(a[i]);
                  last=a[i];
              }
              i++;
          }
          else if(b[j]<=a[i])
          {
              if(b[j]!=last)
              {
                  ans.push_back(b[j]);
                  last=b[j];
              }
              j++;
          }
       }
      while(i<=n-1)
      {
          if(a[i]!=last)
          {
              ans.push_back(a[i]);
              last=a[i];
              
          }
          i++;
      }
      while(j<=m-1)
      {
          if(b[j]!=last)
              {
                  ans.push_back(b[j]);
                  last=b[j];
                  
              }
              j++;
      }
       
       for(int i=0;i<ans.size();i++)
       {
        cout<<ans[i]<<" ";
       }
    return 0;
}