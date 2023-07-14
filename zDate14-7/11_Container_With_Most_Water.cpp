#include <bits/stdc++.h>
using namespace std;

//use two pointer

// Java/C++] Easiest Explanations
// hi-malik


// So, we need to find max area in which most water can contains, where area = width * height
// Therefore, width = right - left i.e. 6 - 1 => 5

// And if we look at height,
// height = min(8, 8)
// Thus, area will be:-
// area = 5 * 8 => 40

int maxArea(vector<int> &height)
{
    int n = height.size();
    int i = 0;
    int j = n - 1;
    int maxi = INT_MIN;

    while (i < j)
    {
        int width = j - i;
        int high = min(height[i], height[j]);
        int area = width * high;
        maxi = max(maxi, area);

        if (height[i] < height[j])
        {
            i++;
        }
        else if (height[j] < height[i])
        {
            j--;
        }
        else
        {
            i++;
            j--;
        }
    }
    return maxi;
}

int main()
{
    vector<int> v = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout<<maxArea(v);
}