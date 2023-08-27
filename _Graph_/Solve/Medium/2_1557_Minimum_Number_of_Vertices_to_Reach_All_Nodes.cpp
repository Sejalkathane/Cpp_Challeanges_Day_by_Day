#include <bits/stdc++.h>
using namespace std;

vector<int> findSmallestSetOfVertices(int n, vector<vector<int>> &edges)
{
    vector<int> indegree(n, 0);

    // also do using set
    //   set<int>s;
    for (auto &edge : edges)
    {
        indegree[edge[1]]++;
        // s.insert(edge[1]);
    }

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (indegree[i] == 0)
        {
            ans.push_back(i);
        }

        // if(s.find(i)==s.end())
        // {
        //   ans.push_back(i);
    }

    return ans;
}

int main()
{
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {2, 5}, {3, 4}, {4, 2}};
    int n = 6;
    vector<int> ans = findSmallestSetOfVertices(n, edges);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}

// Given a directed acyclic graph, with n vertices numbered from
// 0 to n-1, and an array edges where edges[i] = [fromi, toi] represents
// a directed edge from node fromi to node toi.

// Find the smallest set of vertices from which all nodes in the graph
// are reachable. It's guaranteed that a unique solution exists.

// Notice that you can return the vertices in any order.

// Input: n = 6, edges = [[0,1],[0,2],[2,5],[3,4],[4,2]]
// Output: [0,3]
// Explanation: It's not possible to reach all the nodes from a
//  single vertex. From 0 we can reach [0,1,2,5]. From 3 we can reach
//  [3,4,2,5]. So we output [0,3].