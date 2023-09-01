#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 3, 1, 2, 4, 5, 4, 3, 7, 2};
    int k = 3;
    vector<int> v;
    deque<int> dq;
    int n = nums.size();

    if (n == 1)
    {
        nums.push_back(nums[0]);
    }

    int i = 0;
    int j = 0;

    while (j < n)
    {
        while (dq.size() > 0 & dq.back() < nums[j])
        {
            dq.pop_back();
        }

        dq.push_back(nums[j]);

        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            v.push_back(dq.front());

            if (nums[i] == dq.front())
            {
                dq.pop_front();
            }
            i++;
            j++;
        }
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

//   example :: [1,3,1,2,4,5,4,3,7,2]
//               [ 3 ] | | | | | | |   => 3
//                 [ 3 ] | | | | | |   => 3
//                   [ 4 ] | | | | |   => 4
//                     [ 5 ] | | | |   => 5
//                       [ 5 ] | | |   => 5
//                         [ 5 ] | |   => 5
//                           [ 7 ] |   => 7
//                             [ 7 ]   => 7