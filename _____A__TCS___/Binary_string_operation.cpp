#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "1C0C1C1A0B1";
    int n = str.size();

    int ans = str[0] - 48; // 1st operatin with current +1
                           // ex: 1(ans)^0

    for (int i = 0; i < n - 2; i++)
    {
        if (str[i] == 'A')
        {
            ans = ans & str[i + 1] - 48;
        }
        else if (str[i] == 'B')
        {
            ans = ans | str[i + 1] - 48;
        }
        else if (str[i] == 'C')
        {
            ans = ans ^ str[i + 1] - 48;
        }
    }
    cout << ans;
}