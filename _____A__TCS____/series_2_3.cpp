#include <bits/stdc++.h>
using namespace std;

int main()
{
    // given:1,1,2,3,4,9,8,27,16,81,32,243,64,729,128,2187.....
    //  two gp one is even other is odd

    // we have to find nth series

    int k = 6;
    int ans = 0;
    if (k == 1 || k == 2)
    {
        ans = 1;
    }
    else if (k % 2 != 0)
    {
        int p = k / 2;
        ans = pow(2, p);
    }
    else if (k % 2 == 0)
    {
        int p = (k / 2) - 1;
        ans = pow(3, p);
    }
    cout << ans;
}