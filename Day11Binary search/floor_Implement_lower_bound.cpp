#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 8, 10, 11, 12, 19};
    int n = arr.size();
    int K = 3;
    long long int lo = 0, hi = n - 1, mid, flor = -1;
    while (lo <= hi)
    {
        mid = lo + (hi - lo) / 2;
        if (arr[mid] == K)
        {
            cout << mid;
            return 0;
        }
        else if (arr[mid] < K)
        {
            flor = mid;
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    cout << flor;
}