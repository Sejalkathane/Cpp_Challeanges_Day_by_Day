#include <bits/stdc++.h>
using namespace std;
// Given an array containing N integers and an integer K., Your task is to find the length of the longest Sub-Array with the sum of the elements equal to the given value K.

// Example 1:
// Input :
// A[] = {10, 5, 2, 7, 1, 9}
// K = 15
// Output : 4
// Explanation:
// The sub-array is {5, 2, 7, 1}.
int main()
{

    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    int n = nums.size();

    // Naive sol^n;
    // int maxLength = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum += nums[j];
    //         if (sum == k)
    //             maxLength = max(maxLength, (j - i + 1));
    //     }
    // }
    // cout<<maxLength;



    int i = 0;
    int j = 0;
    int sum = 0;
    int mx = 0;

    while (j < n)
    {
        sum = sum + nums[j];

        if (sum < k)
        {
            j++;
        }
        else if (sum == k)
        {
            mx = max(mx, (j - i + 1));
            j++;
        }
        else if (sum > k)
        {
            while (sum > k)
            {
                sum = sum - nums[i];
                i++;
            }
            j++;
        }
    }
    cout << mx;

    return 0;
}