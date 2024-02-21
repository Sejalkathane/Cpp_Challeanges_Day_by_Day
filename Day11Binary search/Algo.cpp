#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 4;
    int n = nums.size();

    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == k)
        {
            cout << k << " found at: " << mid + 1;
            return 0;
        }
        else if (nums[mid] < k)
        {///////////////////////////////////
            low = mid + 1;
        }
        else if (nums[mid] > k)
        {
            high = mid - 1;
        }
    }

    return 0;
}