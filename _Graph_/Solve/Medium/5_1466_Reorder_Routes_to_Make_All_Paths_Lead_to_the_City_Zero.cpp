#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<pair<int, int>>> &adj, vector<bool> &vis, int &change, int node)
{
    vis[node] = true;

    for (auto it : adj[node])
    {
        if (!vis[it.first])
        {
            if (it.second == 1)
                change++;

            dfs(adj, vis, change, it.first);
        }
    }
}

int minReorder(int n, vector<vector<int>> &connections)
{
    vector<vector<pair<int, int>>> adj(n);
    for (auto connect : connections)
    {
        adj[connect[0]].push_back({connect[1], 1});  // away from 0
        adj[connect[1]].push_back({connect[0], -1}); // toward 0
    }

    // make a visited array
    vector<bool> vis(n, false);
    int change = 0;

    dfs(adj, vis, change, 0);

    return change;
}

int main()
{
    vector<vector<int>> connections;
    int n = connections.size();
    cout << minReorder(n, connections);
    return 0;
}

// There are n cities numbered from 0 to n - 1 and n - 1 roads such that there 
// is only one way to travel between two different cities (this network form a tree). 
// Last year, The ministry of transport decided to orient the roads in one direction because 
// they are too narrow.

// Roads are represented by connections where connections[i] = [ai, bi] represents 
// a road from city ai to city bi.

// This year, there will be a big event in the capital (city 0), and many people want
//  to travel to this city.

// Your task consists of reorienting some roads such that each city can visit the city 0.
//  Return the minimum number of edges changed.

// It's guaranteed that each city can reach city 0 after reorder.

// Input: n = 6, connections = [[0,1],[1,3],[2,3],[4,0],[4,5]]
// Output: 3
// Explanation: Change the direction of edges show in red such
//    that each node can reach the node 0 (capital).
// Example 2:


// Input: n = 5, connections = [[1,0],[1,2],[3,2],[3,4]]
// Output: 2
// Explanation: Change the direction of edges show in red such that each node can 
// reach the node 0 (capital).