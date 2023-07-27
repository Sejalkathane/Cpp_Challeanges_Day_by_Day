#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 200;
    stack<int> s;

    for (int i = 9; i >= 2; i--)
    {
        while (n % i ==  0)
        {
            s.push(i);
            n = n / i;
        }
    }

    if (n != 1)
    {
        cout << -1;
        return 0;
    }

    int ans = 0;
    while (!s.empty())
    {
        ans = ans * 10 + s.top();
        s.pop();
    }

    cout << ans;
}