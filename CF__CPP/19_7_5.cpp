#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long count[3] = {0}; // Stores the count of remainders when divided by 3
        for (int i = 0; i < n; i++)
        {
            count[arr[i] % 3]++;
        }

        // Calculate the number of increments required for each remainder type
        long long target = n / 3;
        long long moves = 0;

        while (true)
        {
            int max_diff = max({count[0], count[1], count[2]}) - target;
            if (max_diff == 0)
                break;

            for (int i = 0; i < 3; i++)
            {
                if (count[i] > target)
                {
                    int next = (i + 1) % 3;
                    int diff = count[i] - target;
                    moves += diff;
                    count[i] -= diff;
                    count[next] += diff;
                }
            }
        }

        cout << moves << endl;
    }
    return 0;
}
