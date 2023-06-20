#include<bits/stdc++.h>
using namespace std;

//Convert Binary to Decimal

//0111 =>7

int getdec(long long num)
{
    int i=0,decimal=0;
    while(num!=0)
    {
        int digit=num%10;
        decimal+=digit*pow(2,i);
        num=num/10;
        i++;
    }
    return decimal;

}

int main()
{
    // string s="0111";
    // 1. Method::
    // cout<<stoi(s,0,2);



    // 2.Method::
    long long bin = 10111;
    
    cout<<getdec(bin);

    return 0;
}