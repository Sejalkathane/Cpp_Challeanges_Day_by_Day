#include <bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>> &graph, vector<bool> &vis, int node, int parent = -1)
{
    // if already visited
    if (vis[node])
        return true;
    vis[node] = true;

    for (auto it : graph[node])
    {
        if (it != parent && dfs(graph, vis, it, node))
            return true;
    }

    return false;
}

vector<int> findRedundantConnection(vector<vector<int>> &edges)
{
    int n = edges.size();
    vector<vector<int>> graph(n + 1);

    vector<bool> vis(n + 1);

    for (auto &it : edges)
    {
        fill(begin(vis), end(vis), false);
        graph[it[0]].push_back(it[1]), graph[it[1]].push_back(it[0]);
        // check cycle ditected
        if (dfs(graph, vis, it[0]))
            return it;
    }
    return {};
}


int main()
{

    vector<vector<int>>edge={{1,2},{2,3},{3,4},{1,4},{1,5}};
    vector<int>ans=findRedundantConnection(edge);

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}

// In this problem, a tree is an undirected graph that is connected and has no cycles.

// You are given a graph that started as a tree with n nodes labeled from 1 to n,
//  with one additional edge added. The added edge has two different vertices chosen
//   from 1 to n, and was not an edge that already existed. The graph is represented as
//    an array edges of length n where edges[i] = [ai, bi] indicates that there is an edge
//    between nodes ai and bi in the graph.

// Return an edge that can be removed so that the resulting graph is a tree of n nodes. If
// there are multiple answers, return the answer that occurs last in the input.

// Input: edges = [[1,2],[1,3],[2,3]]
// Output: [2,3]
// Example 2:

// Input: edges = [[1,2],[2,3],[3,4],[1,4],[1,5]]
// Output: [1,4]