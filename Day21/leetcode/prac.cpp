#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {2, 3, 4, 3, 4};
    // vector<int> nums = {4,5,6};
    int n = nums.size();

    if (n <= 2)
        return 0;

    vector<int> v;

    v.push_back(nums[1] - nums[0]);
    v.push_back(nums[2] - nums[1]);

    for (int i = 2; i < n - 1; i++)
    {
        v.push_back(nums[i + 1] - nums[i]);
    }

    int i = 0;
    int j = 0;
    bool t = true;
    int maxi = INT_MIN;
    while (j < v.size())
    {
       if(v[j]==v[j+1])
       {
          j++;
          i=j;
       }
       else if(v[j]!=v[j+1])
       {
        j++;
       }

        maxi=max(maxi,j-i+1);
    }
    cout<<maxi;
}