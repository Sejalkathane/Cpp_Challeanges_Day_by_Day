#include<bits/stdc++.h>
using namespace std;

// 1 2 3 4 5
//+=> 2 3 4 5 1
int main()
{
    vector<int> arr = {1, 2, 4, 7, 7, 5};
    int n = arr.size();
    
    int a=arr[0];

    for(int i=0;i<n-1;i++)
    {
         arr[i]=arr[i+1];
    }
    arr[n-1]=a;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}