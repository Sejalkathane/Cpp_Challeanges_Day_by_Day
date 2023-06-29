#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int, int>>v = {{4, 3, 2, -1}, 
                                {3, 2, 1, -1},
                                {1, 1, -1, -2}, 
                                {-1, -1, -2, -3}};

    int row = v.size();
    int col = v[0].size();
    int count = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (v[i][j] < 0)
            {
                count++;
            }
        }
    }
    cout << count;
}