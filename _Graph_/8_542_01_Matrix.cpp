#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> updateMatrix(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();

    // make visited matrix
    vector<vector<int>> vis(n, vector<int>(m, 0));
    // make a dist matrix
    vector<vector<int>> dist(n, vector<int>(m, 0));

    // format is :: {{r,c},steps}
    queue<pair<pair<int, int>, int>> q;

    // mark all 0 visited
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 0)
            {
                q.push({{i, j}, 0});
                vis[i][j] = 1;
            }
            else
            {
                vis[i][j] = 0;
            }
        }
    }

    int drow[] = {-1, 0, 1, 0};
    int dcol[] = {0, 1, 0, -1};

    while (!q.empty())
    {
        int row = q.front().first.first;
        int col = q.front().first.second;
        int step = q.front().second;

        q.pop();

        // push in dis final matrix;
        dist[row][col] = step;

        for (int i = 0; i < 4; i++)
        {
            int nrow = row + drow[i];
            int ncol = col + dcol[i];

            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0)
            {
                vis[nrow][ncol] = 1;
                q.push({{nrow, ncol}, step + 1});
            }
        }
    }
    return dist;
}

int main()
{
    vector<vector<int>>grid={{0,0,0},{0,1,0},{1,1,1}};
   vector<vector<int>>ans=updateMatrix(grid);

   for(int i=0;i<ans.size();i++)
   {
    for(int j=0;j<ans[0].size();j++)

    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
   }
}