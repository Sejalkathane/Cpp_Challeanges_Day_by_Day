#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 2};
    int k = 3;

    int n = arr.size();

    int i = 0;
    int j = 0;

    queue<int> q;
    vector<int> v;
    while (j < n)
    {
        if (arr[j] < 0)
        {
            q.push(arr[j]);
        }

        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            if (q.empty())
            {
                v.push_back(0);
            }
            else
            {
                v.push_back(q.front());
            }

            if (arr[i] == q.front())
            {
                q.pop();
            }
            i++;
            j++;
        }
    }


    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}