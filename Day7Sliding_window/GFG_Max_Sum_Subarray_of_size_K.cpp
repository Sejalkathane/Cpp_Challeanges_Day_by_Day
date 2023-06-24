#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr={100, 200,900, 300,100, 400};
    int k=3; //window size();

    int n=arr.size();

    int i=0;
    int j=0;
    int mx=INT_MIN,sum=0;

    while(j<n)
    {
        sum=sum+arr[j];

        if(j-i+1 < k)
        {
            j++;
        }
        else if(j-i+1 == k)
        {
            mx=max(mx,sum);
            sum=sum-arr[i];
            i++;
            j++;
        }
    }

    cout<<mx;

    return 0;
}