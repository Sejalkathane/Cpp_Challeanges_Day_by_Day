#include <bits/stdc++.h>
using namespace std;

bool search(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] == target)
        {
            return true;
        }

        // imp
        if ((nums[low] == nums[mid]) && (nums[high] == nums[mid]))
        {
            low++;
            high--;
        }

        else if (nums[low] <= nums[mid])
        {
            if (target >= nums[low] && target <= nums[mid])
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
            if (target >= nums[mid] && target <= nums[high])
            {
                return low = mid + 1;
            }
            else
            {
                return high = mid - 1;
            }
        }
    }
    return false;

    // for(int i=0;i<nums.size();i++)
    // {
    //   if(nums[i]==target)
    //   {
    //     return true;
    //   }
    // }
    // return false;
}

int main()
{

    vector<int> nums = {2, 5, 6, 0, 0, 1, 2};
    int target = 0;
    if (search(nums, target) == 1)
        cout << "true";
    else
        cout << "false";


    return 0;
}