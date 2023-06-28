#include <bits/stdc++.h>
using namespace std;

//[1,3,5,6]  target = 5

int main()
{
    vector<int> nums = {1, 3, 5, 6};
    int n = nums.size();
    int target = 2;

    // we need to understand our array is give out index by using low
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout<<low;

    return 0;
}