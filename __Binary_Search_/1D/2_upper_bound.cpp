#include<bits/stdc++.h>
using namespace std;

// upper Bound:: smallest index ,greater than target



int upperBound(vector<int>v,int target)
{
    int n=v.size();
    int low=0,high=n-1;
    int ans=n;

    while (low<=high)
    {
        int mid=(low+high)/2;

        if(v[mid]>target)
        {
            ans=mid;
            high=mid-1;
        }
        else 
        {
            low=mid+1;
        }
    }
    return ans;
}

int main()
{
   vector<int> v = {1, 2, 4, 4, 5, 7, 9};

    int target = 4;
    int index = upperBound(v, target);
    cout<<index;
}