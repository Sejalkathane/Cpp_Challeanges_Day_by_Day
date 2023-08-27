// Simple dfs
#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &graph, vector<vector<int>> &ans, vector<int> v, int n, int node)
{
    v.push_back(node);

    if (node == n - 1)
        ans.push_back(v);

    for (auto &i : graph[node])
    {
        dfs(graph, ans, v, n, i);
    }
    v.pop_back();
}

vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
{

    int n = graph.size();
    if (graph.size() == 0)
        return {{}};
    vector<vector<int>> ans;

    vector<int> v;

    dfs(graph, ans, v, n, 0);

    return ans;
}

int main()
{
    vector<vector<int>> graph = {{4, 3, 1}, {3, 2, 4}, {3}, {4}, {}};

    vector<vector<int>> ans = allPathsSourceTarget(graph);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

// Given a directed acyclic graph (DAG) of n nodes labeled from 0 to n - 1,
//  find all possible paths from node 0 to node n - 1 and return them in any order.

// The graph is given as follows: graph[i] is a list of all nodes you can
// visit from node i (i.e., there is a directed edge from node i to node graph[i][j]).

// Input: graph = [[1,2],[3],[3],[]]
// Output: [[0,1,3],[0,2,3]]
// Explanation: There are two paths: 0 -> 1 -> 3 and 0 -> 2 -> 3.

// Input: graph = [[4,3,1],[3,2,4],[3],[4],[]]
// Output: [[0,4],[0,3,4],[0,1,3,4],[0,1,2,3,4],[0,1,4]]
