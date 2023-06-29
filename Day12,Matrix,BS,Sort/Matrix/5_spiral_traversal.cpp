#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3, m = 3;
    int arr[n][m] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = m - 1;

    vector<int> v;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            v.push_back(arr[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            v.push_back(arr[i][right]);
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                v.push_back(arr[bottom][i]);
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                v.push_back(arr[i][left]);
            }
            left++;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}