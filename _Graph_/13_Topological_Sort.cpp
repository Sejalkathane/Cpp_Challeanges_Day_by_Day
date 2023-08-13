#include <bits/stdc++.h>
using namespace std;

// Given a Directed Acyclic Graph (DAG) with V vertices and
//  E edges, Find any Topological Sorting of that Graph.

// void dfs(int node ,vector<int>&vis , stack<int>&st,vector<int>adj[])
// {
//     vis[node]=1;

//     for(auto it:adj[node])
//     {
//         if(!vis[it])
//         {
//             dfs(it,vis,st,adj);
//         }
//     }

//     st.push(node);
// }

// ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

//         TOPOSORT USING BFS

vector<int> topoSort(int V, vector<int> adj[])
{
    int indegre[V] = {0};
    // fill all indegree element
    for (int i = 0; i < V; i++)
    {
        for (auto it : adj[i])
        {
            indegre[it]++;
        }
    }

    queue<int> q;
    // push all element with indegree 0
    for (int i = 0; i < V; i++)
    {
        if (indegre[i] == 0)
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
            indegre[it]--;
            if (indegre[it] == 0)
            {
                q.push(it);
            }
        }
    }

    return ans;
}

int main()
{
    int V = 6;
    vector<int> adj[V];
    adj[2].push_back(3);
    adj[3].push_back(1);
    adj[4].push_back(0);
    adj[4].push_back(1);
    adj[5].push_back(0);
    adj[5].push_back(2);

    //:::::::::CODE FOR DFS::::::::

    // vector<int> vis(V, 0);
    // stack<int> st;

    // for(int i=0;i<V;i++)
    // {
    //     if(!vis[i])
    //     {
    //         dfs(i,vis,st,adj);
    //     }
    // }

    // vector<int> ans;
    // while (!st.empty())
    // {
    //     ans.push_back(st.top());
    //     st.pop();
    // }

    //::::::::::::::code for BFS::::::::::::::::::


    vector<int> ans= topoSort(V,adj);


     // prit ans for all
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}