#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> v;
    //make dequeue;
    deque<int> dq;
    int n = nums.size();
    int i = 0;
    int j = 0;

    if (nums.size() == 1)
    {
        v.push_back(nums[0]);
    }
    else
    {
        while (j < n)
        {

            //Hear we dequeue till our front element os greatest
            while(dq.size() > 0 && dq.back() < nums[j])
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
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}