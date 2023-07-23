#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
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

        int i = 0;
        int j = 0;
        int sum = 0;
        int k = 3;
        int count = 0;
        while (j < n)
        {
            sum += arr[j];

            if (j - i + 1 < k)
            {
                j++;
            }
            else if (j - i + 1 == k)
            {
                if (sum % 3 != 0)
                {
                    int c = sum % 3;
                    int d=3-c;
                    arr[j] = arr[j]+d;
                    int v=i;
                    int w=j;
                    sum=0;
                    while(v<=j)
                    {
                        sum+=arr[v];
                        v++;
                    }
                    count++;
                }
                else
                {
                 sum-=arr[i];
                }
                i++;
                j++;
            }
        }
        cout << count << endl;
    }
    return 0;
}