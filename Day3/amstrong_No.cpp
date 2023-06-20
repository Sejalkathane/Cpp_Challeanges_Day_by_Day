#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Amstrong No //153
    
    int n=371;
    int sum=0;
    int org=n;
    int res;
    while(n>0)
    {
        int res=n%10;
        sum+=res*res*res;
        n=n/10;
    }
    if(sum==org)
    {
        cout<<"Amstrong NO";
    }
    else{
        cout<<"NOT a Amstrong No";
    }




    return 0;
}