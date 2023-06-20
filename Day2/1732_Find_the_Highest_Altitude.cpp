#include<bits/stdc++.h>
using namespace std;


// There is a biker going on a road trip. The road trip consists of n + 1 points at different altitudes. The biker starts his trip on point 0 with altitude equal 0.

// You are given an integer array gain of length n where gain[i] is the net gain in altitude between points i​​​​​​ and i + 1 for all (0 <= i < n). Return the highest altitude of a point.



int main()
{
    int arr[]={-5,1,5,0,-7};
    int n = sizeof(arr) / sizeof(arr[0]);

       int mx=0;
       int sum=0;
       for(int i=0;i<n;i++)
       {
         sum=sum+arr[i];
         mx=max(mx,sum);
       }
       cout<<mx;
    
}