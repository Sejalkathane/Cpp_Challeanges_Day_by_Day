#include <bits/stdc++.h>
using namespace std;

// IF it only positive number then it will be easy because then we mul store all multiply value then diveide by each but conditio is negative then
//  travese left to right except last
// traverse right to left except first

int main()
{
    vector<int> nums = {1, 2, 3, 4};

    int n = nums.size();
    vector<int> v;

    vector<int> left;
    vector<int> right;
    left[0] = 1;      // mul from front
    right[n - 1] = 1; // mul from back

    for (int i = 1; i < n; i++)
    {
        left[i] = left[i - 1] * nums[i - 1];
    }
    
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = right[i + 1] * nums[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        v[i] = left[i] * right[i];
    }

    // print v;
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
    }

    return 0;
}

// brute force TLE
//  for(int i=0;i<n;i++)
//  { int mul=1;
//    for(int j=0;j<n;j++)
//    {
//      if(j==i) continue;
//      mul=mul*nums[j];
//    }
//    v.push_back(mul);
//  }
