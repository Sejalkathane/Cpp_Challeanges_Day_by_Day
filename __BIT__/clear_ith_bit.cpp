#include<bits/stdc++.h>
using namespace std;

int main()
{
    // use concept of set but use negation for mask and apply &
    
    int n=13;
    int i=2;

    int mask=~(1<<i);
    int ans=(mask&n);
    
    cout<<ans;
}