#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=3,m=3;
    int arr[n][m]={{1,2,3},{4,5,6},{7,8,9}};
    
    //Naive approch::
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            v.push_back(arr[i][j]);
        }
    }
    sort(v.begin(),v.end());
    cout<<v[(v.size())/2];
    return 0;
}