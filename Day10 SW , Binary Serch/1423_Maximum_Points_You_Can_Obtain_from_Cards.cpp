#include <bits/stdc++.h>
using namespace std;

// There are several cards arranged in a row, and each card has an associated number of points. The points are given in the integer array cardPoints.
// In one step, you can take one card from the beginning or from the end of the row. You have to take exactly k cards.
// Your score is the sum of the points of the cards you have taken.
// Given the integer array cardPoints and the integer k, return the maximum score you can obtain.

// Example 1:
// Input: cardPoints = [1,2,3,4,5,6,1], k = 3
// Output: 12
// Explanation: After the first step, your score will always be 1. However, choosing the rightmost card first will maximize your total score. The optimal strategy is to take the three cards on the right, giving a final score of 1 + 6 + 5 = 12.

int main()
{

    vector<int> c = {1, 2, 3, 4, 5, 6, 1};
    int k = 3;
    int n = c.size();
    int res = 0;

    for (int i = 0; i < k; i++)
        res += c[i];

    int curr = res;

    for (int i = k - 1; i >= 0; i--)
    {
        // We remove the last visited element and add the non-visited element from the last
        curr -= c[i];
        curr += c[c.size() - k + i];

        // We check the maximum value any possible combination can give
        res = max(res, curr);
    }

    cout << res;
}