#include <bits/stdc++.h>
using namespace std;

// Given a n * m matrix grid where each element can either be 0 or 1. You need to find the shortest distance between a given source cell to a destination cell. The path can only be created out of a cell if its value is 1.

// If the path is not possible between source cell and destination cell, then return -1.

// int shortestPath(vector<vector<int>> &grid, pair<int, int> source, pair<int, int> destination)
// {
//     // code here

//     queue<pair<int, pair<int, int>>> q;
//     q.push({0, {source.first, source.second}});

//     int n = grid.size();
//     int m = grid[0].size();

//     if (source == destination)
//     {
//         return 0;
//     }

//     // mark all infinite
//     vector<vector<int>> dist(n, vector<int>(m, 1e9));

//     int x = destination.first;
//     int y = destination.second;

//     dist[source.first][source.second] = 0;

//     int delrow[] = {-1, 0, 1, 0};
//     int delcol[] = {0, 1, 0, -1};

//     while (!q.empty())
//     {

//         int step = q.front().first;
//         int row = q.front().second.first;
//         int col = q.front().second.second;
//         q.pop();

//         for (int i = 0; i < 4; i++)
//         {
//             int nrow = row + delrow[i];
//             int ncol = col + delcol[i];

//             if (nrow == x && ncol == y)
//                 return step + 1;
//             if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1 && 1 + step < dist[nrow][ncol])
//             {
//                 dist[nrow][ncol] = step + 1;
//                 q.push({step + 1, {nrow, ncol}});
//             }
//         }
//     }

//     return -1;
// }

//::::::::::::::::::::::::: :::::::::::::::::::::::::::::::::::::::: :::::::::::::;;;
// WE CAN ALSO PERFORM THIS WITHOUT USING DIST BECAUSE WE ONLY NEED COUNT NOT MATRIX

int shortestPath(vector<vector<int>> &grid, pair<int, int> source, pair<int, int> destination)
{
    queue<pair<int,pair<int,int>>>q;
    q.push({0,source});

    if(source==destination) return 0;

    int n=grid.size();
    int m=grid[0].size();

    int ans=INT_MAX;
    int x=destination.first;
    int y=destination.second;


    int delrow[]={-1,0,1,0};
    int delcol[]={0,1,0,-1};

    while(!q.empty())
    { 
        int step=q.front().first;
        int row=q.front().second.first;
        int col=q.front().second.second;
        q.pop();
          
        if(row==x && col==y)
        {
            ans=min(ans,step);
        }

        for(int i=0;i<4;i++)
        {
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];

            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1)
            {
                grid[nrow][ncol]=0;     //we make changes in grid
                q.push({step+1,{nrow,ncol}});
            }
        }
    }
    if(ans==INT_MAX) return -1;
    return ans;

}

int main()
{
    vector<vector<int>> grid = {{1, 1, 1, 1}, {1, 1, 0, 1}, {1, 1, 1, 1}, {1, 1, 0, 0}, {1, 0, 0, 1}};
    pair<int, int> source = {0, 1};
    pair<int, int> destination = {2, 2};

    cout << shortestPath(grid, source, destination);
    return 0;
}