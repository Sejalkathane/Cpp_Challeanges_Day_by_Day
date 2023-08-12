#include <bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();

    //  queue store {{r,c},t}
    queue<pair<pair<int, int>, int>> q;

    //  visited array
    int vis[n][m];

    // count initial fresh orange::
    int countfresh = 0;

    // traverse all rotten orange and put it in  queue with mark as visited
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 2)
            {
                q.push({{i, j}, 0});
                vis[i][j] = 2;
            }
            else
            {
                vis[i][j] = 0;
            }

            if (grid[i][j] == 1)
            {
                countfresh++;
            }
        }
    }



    // main bfs
    int tm = 0; // store time
    // drow and rcol for check in four direction
    int drow[] = {-1, 0, 1, 0};
    int dcol[] = {0, 1, 0, -1};

    // count fresh orange during bfs check if all are rotten or not
    int count = 0;

    while (!q.empty())
    {
        int r = q.front().first.first;
        int c = q.front().first.second;
        int t = q.front().second;
        // store max time:
        tm = max(t, tm);

        q.pop();

        // condition to make all fresh oranges rotten
        for (int i = 0; i < 4; i++)
        {
            int nrow = r + drow[i];
            int ncol = c + dcol[i];

            // conditon for boundary and not visited fresh orange
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1)
            {
                q.push({{nrow, ncol}, t + 1});
                vis[nrow][ncol] = 2;
                count++; // count fresh and visited step by step orange
            }
        }
    }

    if (count != countfresh)
        return -1;

    return tm;
}

int main()
{
    vector<vector<int>>grid={{2,1,1},{1,1,0},{0,1,1}};
    
    cout<<orangesRotting(grid);
    

}