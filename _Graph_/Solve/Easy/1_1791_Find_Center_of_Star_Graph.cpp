#include <bits/stdc++.h>
using namespace std;

int findCenter(vector<vector<int>> &edges)
{
    unordered_map<int, int> mp;
    int n = edges.size();

    for (auto &edge : edges)
    {
        mp[edge[0]]++, mp[edge[1]]++;
    }

    for (auto a : mp)
    {
        if (a.second == n)
        {
            return a.first;
        }
    }

    return 0;
}

int main()
{
    vector<vector<int>> edges = {{1, 2}, {2, 3}, {4, 2}};
    cout << findCenter(edges);

    return 0;
}

// There is an undirected star graph consisting of n nodes labeled from
//  1 to n. A star graph is a graph where there is one center node and
//  exactly n - 1 edges that connect the center node with every other node.

// You are given a 2D integer array edges where each edges[i] = [ui, vi]
//  indicates that there is an edge between the nodes ui and vi. Return the
//   center of the given star graph.