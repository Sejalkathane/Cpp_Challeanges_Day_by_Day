#include <bits/stdc++.h>
using namespace std;

// Given an array of integers, write a function that returns true if there is a triplet (a, b, c) that satisfies
// a2 + b2 = c2.
// Example:
// Input: arr[] = {3, 1, 4, 6, 5}
// Output: True
// There is a Pythagorean triplet (3, 4, 5).
// Input: arr[] = {10, 4, 6, 12, 5}
// Output: False
// There is no Pythagorean triplet

int main()
{
    // vector<int> arr = {3, 1, 4, 6,5};
    // vector<int> ans;
    // int n = arr.size();

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         for (int k = 0; k < n; k++)
    //         {
    //             int x = arr[k] * arr[k];
    //             int y = arr[j] * arr[j];
    //             int z = arr[i] * arr[i];
    //             if (z == x + y || x == y + z || y == x + z)
    //             {
    //                 cout<<"true";
    //                 return 0;
    //             }
    //         }
    //     }
    // }
    // cout<< "false";

    // dice same as above
    int count = 0;
    int num = 5;
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            for (int k = 1; k <= 6; k++)
            {
                if ((i + j + k) == num)
                {
                    count++;
                }
            }
        }
    }
    cout << count;
}
