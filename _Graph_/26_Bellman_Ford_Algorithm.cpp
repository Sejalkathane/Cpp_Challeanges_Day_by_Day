#include <bits/stdc++.h>
using namespace std;

vector<int> bellman_ford(int V, vector<vector<int>> &edges, int S)
{
    // Code here
    vector<int> dist(V, 1e8);
    dist[S] = 0;

    for (int i = 0; i < V - 1; i++)
    {
        for (auto it : edges)
        {
            int u = it[0];
            int v = it[1];
            int wt = it[2];

            if (dist[u] != 1e8 && dist[u] + wt < dist[v])
            {
                dist[v] = dist[u] + wt;
            }
        }
    }

    // check for cyclic condition:: one again
    for (auto it : edges)
    {
        int u = it[0];
        int v = it[1];
        int wt = it[2];

        if (dist[u] != 1e8 && dist[u] + wt < dist[v])
        {
            return {-1};
        }
    }

    return dist;
}

int main()
{
    int V = 3;
    vector<vector<int>> edges = {{0, 1, 5}, {1, 0, 3}, {1, 2, -1}, {2, 0, 1}};
    int S = 2;
     vector<int> ans=bellman_ford(V,edges,S);

    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    return 0;
}