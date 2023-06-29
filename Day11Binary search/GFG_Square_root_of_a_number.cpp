#include <bits/stdc++.h>
using namespace std;

// Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x).
// Example 1:
// Input:
// x = 5
// Output: 2
// Explanation: Since, 5 is not a perfect
// square, floor of square_root of 5 is 2.

int main()
{
    // 📌 VMWare 📌 Flipkart 📌 Accolite 📌 Amazon 📌 Microsoft

    //square root
    int n = 555;

    int low = 0;
    int high = n;
    int ans = 0;

    int x = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if ((mid * mid) <= x)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans;
}