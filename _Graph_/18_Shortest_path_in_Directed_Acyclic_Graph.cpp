#include <bits/stdc++.h>
using namespace std;

// Given a Directed Acyclic Graph of N vertices from 0 to N-1 and a 2D Integer array(or vector) edges[ ][ ]
// of length M, where there is a directed edge from edge[i][0] to edge[i][1] with a distance of edge[i][2] for all i.

// Find the shortest path from src(0) vertex to all the vertices and if it is
//  impossible to reach any vertex, then return -1 for that vertex.

void topo(int node, stack<int> &st, vector<int> &vis, vector<pair<int, int>> adj[])
{
    vis[node] = 1;

    for (auto it : adj[node])
    {
        int v = it.first;
        if (!vis[v])
        {
            topo(v, st, vis, adj);
        }
    }
    st.push(node);
}

vector<int> shortestPath(int n, int m, vector<vector<int>> &edges)
{

    vector<pair<int, int>> adj[n];

    for (int i = 0; i < m; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];
        adj[u].push_back({v, wt});
    }

    // find the toposort
    stack<int> st;
    vector<int> vis(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            topo(i, st, vis, adj);
        }
    }

    vector<int> dist(n);
    for (int i = 0; i < n; i++)
        dist[i] = INT_MAX;
    dist[0] = 0;

    while (!st.empty())
    {
        int node = st.top();
        st.pop();
        // Check for valid distance

        if (dist[node] != INT_MAX)
        {
            for (auto it : adj[node])
            {
                int v = it.first;
                int wt = it.second;

                if ((dist[node] + wt) < dist[v])
                {
                    dist[v] = dist[node] + wt;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (dist[i] == INT_MAX)
            dist[i] = -1;
    }
    return dist;
}

int main()
{
  int N = 6, M = 7;
  vector<vector<int>>edges={{0,1,2},{0,4,1},{4,5,4},{4,2,2},{1,2,3},{2,3,6},{5,3,1}};

  vector<int>ans= shortestPath(N,M,edges);
  for(int i=0;i<ans.size();i++)
  {
    cout<<ans[i]<<" ";
  }

    return 0;
}