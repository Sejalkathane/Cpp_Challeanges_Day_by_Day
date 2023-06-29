#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4, m = 4;
    int arr[n][m] = {{0, 1, 1, 1},
                     {0, 0, 1, 1},
                     {1, 1, 1, 1},
                     {0, 0, 0, 0}};

    // simple::

    // int i = 0,j = m - 1, res = -1;
    // while (i < n && j >= 0)
    // {
    //     if (arr[i][j] == 1)
    //     {
    //         j--;
    //         res = i;
    //     }
    //     else
    //     {
    //         i++;
    //     }
    // }
    // cout<<res;

    int count = 0;
    int ans = 0;
        // check every row and column 
    for (int i = 0; i < n; i++)
    {
        //check every column in rowif yes push back in vector
        vector<int> v;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1)
            {
                v.push_back(arr[i][j]);
            }
        }
        // if size grater than first then count assign to it
        if (v.size() > count)
        {
            count = v.size();
          // assign row to it
            ans = i;
        }

        v.clear();
    }

    if (count == 0)
    {
        cout<<-1;
    }
    else
    {
       cout<<ans;
    }
    return 0;
}