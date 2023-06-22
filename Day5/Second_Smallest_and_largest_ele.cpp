#include <bits/stdc++.h>
using namespace std;

// hear we need to find largest and secondlargest
// eg.hear its: L=8,SL=5

int findsecondlargest(vector<int> &arr, int n)
{
    int sec = INT_MIN;
    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx)
        {
            sec = mx;
            mx = arr[i];
        }
        else if (arr[i] > sec && arr[i] != mx)
        {
            sec = arr[i];
        }
    }

    return sec;
}

int findsecondsmallest(vector<int> &arr, int n)
{
    int sec=INT_MAX;
    int mi=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<mi)
        {
            sec=mi;
            mi=arr[i];
        }
        else if (arr[i] < sec && arr[i] != mi)
        {
            sec = arr[i];
        }
    }
    return sec;
}
int main()
{
    vector<int> arr = {1, 2, 4, 7, 7, 5};
    // vector<int>arr={93,63,777,1424};

    int n = arr.size();

    // Naive approch O(n logn) *************************************************
    //  sort(arr.begin(),arr.end());

    // cout<<"Second Smallest ="<<arr[1]<<endl;
    // cout<<"Second Largest ="<<arr[n-2]<<endl;

    // Efficent approch

    cout << findsecondlargest(arr, n)<<endl;
    cout << findsecondsmallest(arr, n);

    return 0;
}