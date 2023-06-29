#include <bits/stdc++.h>
using namespace std;

// same as First and last occurance only diff is we find length so it will be 
// {{{ last-first+1 }}}
int main()
{
    vector<int> nums = {5, 7,7,7,7,7, 8, 8, 10};
    int target = 7;
    int n = nums.size();

    int ans = -1;
    vector<int> v;

    // first occurance is always present on left side thats why we move high
    int low = 0;
    int high = n - 1;
    bool b=false;

    int first=0;
    int last=0;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            high = mid - 1;
            b=true;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {

            high = mid - 1;
        }
    }
    first=ans;

    // Second occurance is always present on righ side thats why we move low

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] == target)
        {
            ans = mid;
            low = mid + 1;
            b=true;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {

            high = mid - 1;
        }
    }
    last=ans;

    if(b==true)
    {
        cout<<last-first+1;
    }
    else
    {
        cout<<0;
    }

}