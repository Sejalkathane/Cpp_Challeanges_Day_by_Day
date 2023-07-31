#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr={2,5,3,6,1,6,3,5,2};

    int n=arr.size();

    // using bit
    int xo=0;
    for(int i=0;i<n;i++)
    {
      xo=xo^arr[i];
    }

    cout<<xo;

    return 0;
}