#include <bits/stdc++.h>
using namespace std;

// Detect cycle in a directed graph

// Given a Directed Graph with V vertices (Numbered from 0 to V-1)
// and E edges, check whether it contains any cycle or not.


//idea:::: make two visited one is path and other is visted
bool dfs(int node, int vis[], int path[], vector<int> adj[])
{
    vis[node] = 1;
    path[node] = 1;

    for (auto it : adj[node])
    {
        // node not vis
        if (vis[it] == 0)
        {
            if (dfs(it, vis, path, adj) == true)
                return true;
        }
        // if node vis
        else if (path[it] == 1)
        {
            return true;
        }
    }

    path[node] = 0;
    return false;
}

bool isCyclic(int V, vector<int> adj[])
{
    // code here
    int vis[V] = {0};
    int path[V] = {0};

    for (int i = 0; i < V; i++)
    {
        if (vis[i] == 0)
        {
            if (dfs(i, vis, path, adj) == true)
                return true;
        }
    }
    return false;
}
int main()
{
    int V, E;
    cout << "Enter the number of vertices: ";
    cin >> V;
    cout << "Enter the number of edges: ";
    cin >> E;

    vector<int> adj[V];

    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    cout << isCyclic(V, adj);

    return 0;
}