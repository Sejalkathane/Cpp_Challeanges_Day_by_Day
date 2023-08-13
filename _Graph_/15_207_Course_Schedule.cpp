#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, vector<int> &vis, vector<int> &path, vector<vector<int>> &adj)
{
    vis[node] = 1;
    path[node] = 1;

    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            if (dfs(it, vis, path, adj) == true)
                return true;
        }
        else if (path[it])
        {
            return true;
        }
    }

    path[node] = 0;
    return false;
}

bool canFinish(int V, vector<vector<int>> &pre)
{
    vector<vector<int>> adj(V);

    for (int i = 0; i < pre.size(); i++)
    {
        adj[pre[i][1]].push_back(pre[i][0]);
    }

    int v = adj.size();
    vector<int> vis(v, 0);
    vector<int> path(v, 0);

    for (int i = 0; i < v; i++)
    {
        if (!vis[i])
        {
            if (dfs(i, vis, path, adj) == true)
                return false;
        }
    }

    return true;
}

int main()
{

    int V=2;
    vector<vector<int>>pre={{1,0},{0,1}};
  cout<<canFinish(V,pre);
  
}