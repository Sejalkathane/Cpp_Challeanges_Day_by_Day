#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 13;
    // last bit at 1 so we need to remove it
    int ans = (n & (n - 1));
    cout << ans;
   

    return 0;
}