// same as 22
#include <bits/stdc++.h>
using namespace std;

int shortestPathBinaryMatrix(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    if (grid[0][0] == 1 || grid[n - 1][m - 1] == 1)
        return -1;
    if (n == 1 && m == 1)
        return 1;

    queue<pair<int, pair<int, int>>> q;
    q.push({1, {0, 0}});

    // mark all infinite
    vector<vector<int>> dist(n, vector<int>(m, 1e9));

    int x = n - 1;
    int y = m - 1;

    dist[0][0] = 0;

    int delrow[] = {-1, 0, 1, 0, -1, -1, 1, 1};
    int delcol[] = {0, 1, 0, -1, 1, -1, 1, -1};

    while (!q.empty())
    {
        int step = q.front().first;
        int row = q.front().second.first;
        int col = q.front().second.second;
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];

            if (nrow == n - 1 && ncol == m - 1)
                return step + 1;

            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 0 && 1 + step < dist[nrow][ncol])
            {
                dist[nrow][ncol] = step + 1;
                q.push({step + 1, {nrow, ncol}});
            }
        }
    }

    return -1;
}

int main()
{
    vector<vector<int>> grid={{0,0,0},{1,1,0},{1,1,0}};
    cout<<shortestPathBinaryMatrix(grid);
}