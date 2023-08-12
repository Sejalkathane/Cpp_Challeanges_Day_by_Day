#include <bits/stdc++.h>
using namespace std;

void dfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &board, int delrow[], int delcol[])
{
    int n = board.size();
    int m = board[0].size();

    vis[row][col] = 1;

    for (int i = 0; i < 4; i++)
    {
        int nrow = row + delrow[i];
        int ncol = col + delcol[i];

        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol] && board[nrow][ncol] == 'O')
        {
            dfs(nrow, ncol, vis, board, delrow, delcol);
        }
    }
}

void solve(vector<vector<char>> &board)
{
    int n = board.size();
    int m = board[0].size();

    int delrow[] = {-1, 0, 1, 0};
    int delcol[] = {0, 1, 0, -1};

    vector<vector<int>> vis(n, vector<int>(m, 0));

    // condition for 2 column
    // for (int i = 0; i < n; i++)
    // {
    //     // left
    //     if (!vis[i][0] && board[i][0] == 'O')
    //     {
    //         dfs(i, 0, vis, board, delrow, delcol);
    //     }
    //     // right
    //     if (!vis[i][m - 1] && board[i][m - 1] == 'O')
    //     {
    //         dfs(i, m - 1, vis, board, delrow, delcol);
    //     }
    // }

    // // condition for 2 row
    // for (int j = 0; j < m; j++)
    // {
    //     // top
    //     if (!vis[0][j] && board[0][j] == 'O')
    //     {
    //         dfs(0, j, vis, board, delrow, delcol);
    //     }
    //     // bottom
    //     if (!vis[n - 1][j] && board[n - 1][j] == 'O')
    //     {
    //         dfs(n - 1, j, vis, board, delrow, delcol);
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
            {
                if (board[i][j] == 'O')
                    dfs(i, j, vis, board, delrow, delcol);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && board[i][j] == 'O')
            {
                board[i][j] = 'X';
            }
        }
    }
}



//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

//BFS

int numEnclaves(vector<vector<int>>& grid)
 {
   int n=grid.size();
   int m=grid[0].size();
    
  queue<pair<int,int>>q;
  vector<vector<int>> vis(n,vector<int>(m,0)); 

    for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(i == 0 || j == 0 || i == n-1 || j == m-1)
                {
                    if(grid[i][j] == 1)
                    {
                       q.push({i,j});
                       vis[i][j]=1;
                    }

                    
                }
            }
        }

       int delrow[]={-1,0,1,0};
       int delcol[]={0,1,0,-1};

       while(!q.empty())
       {
         int row=q.front().first;
         int col=q.front().second;

         q.pop();

         for(int i=0;i<4;i++)
         {
              int nrow=row+delrow[i];
              int ncol=col+delcol[i];

            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1 && vis[nrow][ncol]==0)
            {
                q.push({nrow,ncol});
                vis[nrow][ncol]=1;
            }
          } 

       }


     int ans=0;
     for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)
       {
         if(grid[i][j]==1 && vis[i][j]==0) ans++;
       }
    }

    return ans;

 }

int main()
{

    vector<vector<char>> board = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    int n = board.size();
    int m = board[0].size();

    solve(board);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }
}