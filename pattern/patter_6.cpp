//reverse 1-5 trangle
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    for(int i=0;i<n;i++)
    {
      for(int j=n;j>i;j--)
     {
        cout<<n-j+1;
     }
     cout<<endl;
    }
    
    return 0;
}