#include<bits/stdc++.h>
using namespace std;


int main()
{

    uint32_t n= 00000000000000000000000000001011;
    // uint32_t n = 11111111111111111111111111111101;

      int res=0;
        while(n>0)
        {
            n=(n&(n-1));
            res++;
        } 
        cout<<res;
}