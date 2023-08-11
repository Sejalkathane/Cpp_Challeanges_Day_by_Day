#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], int vis[], vector<int> ans)
{
    vis[node] = 1;
    ans.push_back(node);

    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, adj, vis, ans);
        }
    }
}

vector<int> maindfs(int V, vector<int> adj[])
{
    int vis[V] = {0};
    int start = 0;
    vector<int> ans;
    dfs(start, adj, vis, ans);
    return ans;
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

    vector<int>ans=maindfs(V, adj);
    
    for(auto i:ans)
    {
        cout<<i<<" ";
    }

}