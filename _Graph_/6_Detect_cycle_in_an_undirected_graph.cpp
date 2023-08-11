#include <bits/stdc++.h>
using namespace std;



//DFS::
// bool dfs(vector<int> adj[], int vis[], int source, int parent)
//     {
//         vis[source] = true;
        
//         for(auto u : adj[source])
//         {
//             if(vis[u] == false)
//             {
//                 if(dfs(adj, vis, u, source))
//                 {
//                     return true;
//                 }
//             }
//             else if(u != parent)
//             {
//                 return true;
//             }
//         }
        
//         return false;
//     }
 
// public: 
//     bool isCycle(int V, vector<int> adj[]) {
        
//         int vis[V]={0};
        
//         for(int i = 0; i < V; i++)
//         {
//             if(vis[i] == false)
//             {
//                 if(dfs(adj, vis, i, -1))
//                 {
//                     return true;
//                 }
//             }
//         }
        
//         return false;
//     }



//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

bool isDetect(int src, int vis[], vector<int> adj[])
{
    vis[src] = 1;
    queue<pair<int, int>> q;
    q.push({src, -1});

    while (!q.empty())
    {
        int node = q.front().first;
        int parent = q.front().second;

        q.pop();

        for (auto i : adj[node])
        {
            if (!vis[i])
            {
                vis[i] = 1;
                // we insert current node as parent for other adjuscent node
                q.push({i, node});
            }
            // if other than parent are visited then its true
            else if (parent != i)
            {
                return true;
            }
        }
    }
    return false;
}


bool isCycle(int V, vector<int> adj[])
{

    int vis[V] = {0};
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            if (isDetect(i, vis, adj))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int V,E;
    
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
        adj[v].push_back(u);
    }

    
    cout<<isCycle(V,adj);
}

// Input:  
// V = 5, E = 5
// adj = {{1}, {0, 2, 4}, {1, 3}, {2, 4}, {1, 3}} 
// Output: 1