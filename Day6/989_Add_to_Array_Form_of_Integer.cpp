// The array-form of an integer num is an array representing its digits in left to right order.
// For example, for num = 1321, the array form is [1,3,2,1].
// Given num, the array-form of an integer, and an integer k, return the array-form of the integer num + k.

// Example 1:
// Input: num = [1,2,0,0], k = 34
// Output: [1,2,3,4]
// Explanation: 1200 + 34 = 1234

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 0, 0};
    int k = 34;

    int i = a.size() - 1;
    int carry = 0;
    vector<int> ans;

    while (i >= 0 || carry > 0 || k != 0)
    {
        if (k != 0)
        {
            carry += (k % 10);
            k = k / 10;
        }

        if (i >= 0)
        {
            carry += a[i];
            i--;
        }

        ans.push_back(carry % 10);
        carry = carry / 10;
    }

    reverse(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }

    return 0;
}