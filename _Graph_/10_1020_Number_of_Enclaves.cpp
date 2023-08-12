#include <bits/stdc++.h>
using namespace std;

void dfs(int row, int col, vector<vector<int>> &grid, int delrow[], int delcol[])
{
    int n = grid.size();
    int m = grid[0].size();

    grid[row][col] = 0;

    for (int i = 0; i < 4; i++)
    {
        int nrow = row + delrow[i];
        int ncol = col + delcol[i];

        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1)
        {
            dfs(nrow, ncol, grid, delrow, delcol);
        }
    }
}

int numEnclaves(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();

    int delrow[] = {-1, 0, 1, 0};
    int delcol[] = {0, 1, 0, -1};

    // check for boundary:
    // check for col
    // for (int i = 0; i < n; i++)
    // {
    //     if (grid[i][0] == 1)
    //     {
    //         dfs(i, 0, grid, delrow, delcol);
    //     }

    //     if (grid[i][m - 1] == 1)
    //     {
    //         dfs(i, m - 1, grid, delrow, delcol);
    //     }
    // }

    // // check for row
    // for (int i = 0; i < m; i++)
    // {
    //     if (grid[0][i] == 1)
    //     {
    //         dfs(0, i, grid, delrow, delcol);
    //     }

    //     if (grid[n - 1][i] == 1)
    //     {
    //         dfs(n - 1, i, grid, delrow, delcol);
    //     }
    // }

    for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(i == 0 || j == 0 || i == n-1 || j == m-1)
                {
                    if(grid[i][j] == 1)
                    dfs(i,j,grid,delrow,delcol);
                }
            }
        }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1)
                ans++;
        }
    }

    return ans;
}


int main()
{
    vector<vector<int>>grid = {{0,1,1,0},{0,0,1,0},{0,0,1,0},{0,0,0,0}};

    cout << numEnclaves(grid);
}