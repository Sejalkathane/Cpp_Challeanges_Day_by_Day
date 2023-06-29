#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=3,m=3;
    int arr[n][m]={{1,2,3},{4,5,6},{7,8,9}};

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    // only change row element from 1-row;
    for(int i=0;i<n;i++)
    {
        int low=0;
        int high=n-1;
        while(low<high)
        {
            swap(arr[low][i],arr[high][i]);
            low++;
            high--;
        }
    }

      for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}