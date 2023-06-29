#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int arr[m];
        for (int i = 1; i <= m; i++)
        {
            cin >> arr[i];
        }
        int nums[n];
        for (int i = 1; i <= n; i++)
        {
            nums[i] = i;
        }
        int low = 1;
        int high = 1;
        int sum = 0;
        while (low <= n)
        {
            if (nums[low] != arr[high])
            {
                sum = sum + nums[low];
                low++;
            }
            else
            {
                low++;
                high++;
            }
        }

        cout << sum<<endl;
    }
    return 0;
}
