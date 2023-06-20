#include<bits/stdc++.h>
using namespace std;


int main()
{
    //three way to calculate 
    //1. By for loop
    //2. pow() funtion
    // 3. 

    int x=2,n=3; //x^n
    int ans=1;

    while(n!=0)
    {
        if(n%2==0)
        {
            x=x*x;
            n/=2;
        } 
        else
        {
            ans=ans*x;
            n--;
        }
    }

    cout<<ans<<endl;


    return 0;
}




