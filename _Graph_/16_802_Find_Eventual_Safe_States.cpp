#include <bits/stdc++.h>
using namespace std;

vector<int> eventualSafeNodes(vector<vector<int>> &graph)
{
    int n = graph.size();

    // store in list
    vector<int> adj[n];

    // change direction of directed graph  nad now do topo sort
    for (int i = 0; i < n; i++)
    {
        for (auto j : graph[i])
        {
            adj[j].push_back(i);
        }
    }

    vector<int> indeg(n);

    for (int i = 0; i < n; i++)
    {
        for (auto it : adj[i])
        {
            indeg[it]++;
        }
    }

    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        if (indeg[i] == 0)
        {
            q.push(i);
        }
    }

    vector<int> ans;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for (auto it : adj[node])
        {
            indeg[it]--;
            if (indeg[it] == 0)
            {
                q.push(it);
            }
        }
    }

    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<vector<int>>graph={{1,2},{2,3},{5},{0},{5},{},{}};
    vector<int>ans=eventualSafeNodes(graph);

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}