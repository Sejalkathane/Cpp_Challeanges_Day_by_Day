#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int m = 4;
    int arr[n][m] = {{10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 50}};

    int k=50;

    int i=0;
    int j=m-1;
    while(i<n && j>=0)
    {
        if(arr[i][j]==k)
        {
            cout<<"found at: arr ["<<i<<"] "<<"["<<j<<"]";
            break;
        }
        else if(arr[i][j]<k)
        {
            i++;
        }
        else
        {
            j--;
        }
    }


    return 0;
}