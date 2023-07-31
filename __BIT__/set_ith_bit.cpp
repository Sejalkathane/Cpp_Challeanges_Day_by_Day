#include<bits/stdc++.h>
using namespace std;

int main()
{
    // we use or same condition as check for nth bit
    // because it dive one if there is at least 1 are present

    int n=1;
    int i=4;

    int mask=(1<<i);
    int ans=n|mask;
    cout<<ans;
}