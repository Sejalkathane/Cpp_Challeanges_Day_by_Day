#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 169933;

    int res = 0;
    int count = 1;
    int ans = 0;

    while (n != 0)
    {
        res = n % 8; // store remainder
        ans += res * count;   // count increase  by 10 mul
        count = count * 10;
        n = n / 8;
    }
    cout << ans;
}