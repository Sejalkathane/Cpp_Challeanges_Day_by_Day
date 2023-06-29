#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Basic logic is very simple we have have rotated array
    //  then check condition between lo to mid and mid to high

    vector<int> nums = {4 , 5 , 6 , 7 , 0 , 1 , 2};
                //   |low|        |mid|        |high|
        int n = nums.size();
    int x = 0;

    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] == x)
        {
            cout << mid;
            return 0;
        }

        if (nums[low] <= nums[mid])
        {
            if (x <= nums[mid] && x >= nums[low])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (x >= nums[mid] && x <= nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return 0;
}