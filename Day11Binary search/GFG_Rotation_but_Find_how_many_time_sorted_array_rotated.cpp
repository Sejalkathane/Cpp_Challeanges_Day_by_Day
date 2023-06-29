#include <bits/stdc++.h>
using namespace std;

// same as minimum number in rotated Sorted array
// only difference is we return index on minimum element which show no of rotation
int main()
{
    vector<int> nums = {4, 5, 6, 1, 2, 3};
    int n = nums.size();

    if (n == 1)
    {
        return 0;
    }
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] > nums[high])
        {
            low = mid + 1;
        }
        else if (nums[mid] < nums[high])
        {
            high = mid;
        }
    }

    // only change is:

    cout << high;

    return 0;
}