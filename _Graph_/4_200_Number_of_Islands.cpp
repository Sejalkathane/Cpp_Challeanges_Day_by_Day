#include <bits/stdc++.h>
using namespace std;
// Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.

// An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

// Example 1:

// Input: grid = [
//   ["1","1","1","1","0"],
//   ["1","1","0","1","0"],
//   ["1","1","0","0","0"],
//   ["0","0","0","0","0"]
// ]
// Output: 1

//...................................................................




// void bfs(int row,int col,vector<vector<int>>&vis ,vector<vector<char>>& grid)
// {
//     int n=grid.size();
//     int m=grid[0].size();
//    vis[row][col]=1;
//    queue<pair<int,int>>q;
//    q.push({row,col});
//    while(!q.empty())
//    {
//      int row=q.front().first;
//      int col=q.front().second;
//      q.pop();

//      //traverse nebigour check for 8
//      for(int delrow=-1;delrow<=1;delrow++)
//      {
//        for(int delcol=-1;delcol<=1;delcol++)
//        {
//          int nrow=row+delrow;
//          int ncol=col+delcol;

//          if(delrow!=0 && delcol!=0)
//                 {
//                     continue;
//                 }

//          if(nrow>=0 && nrow<n && ncol>=0&&ncol<m && grid[nrow][ncol]=='1' && !vis[nrow][ncol])
//          {
//            vis[nrow][ncol]=1;
//            q.push({nrow,ncol});
//          }
//        }
//      }

//    }
// }
// int numIslands(vector<vector<char>>& grid)
// {
//     //dimension:
//     int n=grid.size();
//     int m=grid[0].size();

//     int count=0;

//     //make a visited array:
//     vector<vector<int>>vis(n,vector<int>(m,0));

//     //see if it
//     for(int row=0;row<n;row++)
//     {
//       for(int col=0;col<m;col++){
//         if(!vis[row][col] && grid[row][col]=='1')
//         {
//           count++;
//           bfs(row,col,vis,grid);
//         }
//       }
//     }

//     return count;
// }

void dfs(vector<vector<int>> &vis, vector<vector<char>> &grid, int i, int j)
{
    int n = grid.size();
    int m = grid[0].size();
    vis[i][j] = 1;

    if (i + 1 < n && vis[i + 1][j] == 0 && grid[i + 1][j] == '1')
    {
        dfs(vis, grid, i + 1, j);
    }
    if (i - 1 > -1 && vis[i - 1][j] == 0 && grid[i - 1][j] == '1')
    {
        dfs(vis, grid, i - 1, j);
    }
    if (j + 1 < m && vis[i][j + 1] == 0 && grid[i][j + 1] == '1')
    {
        dfs(vis, grid, i, j + 1);
    }
    if (j - 1 > -1 && vis[i][j - 1] == 0 && grid[i][j - 1] == '1')
    {
        dfs(vis, grid, i, j - 1);
    }
}

int numIslands(vector<vector<char>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    int count = 0;

    vector<vector<int>> vis(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && grid[i][j] == '1')
            {
                count++;
                dfs(vis, grid, i, j);
            }
        }
    }
    return count;
}

int main()
{
     vector<vector<char>>grid={{'1','1','1','1','0'},{'1','1','0','1','0'},{'1','1','0','1','0'},{'0','0','0','0','0'}};
    cout<<numIslands(grid);
    return 0;
}