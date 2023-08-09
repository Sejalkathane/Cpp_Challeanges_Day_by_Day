#include <bits/stdc++.h>
using namespace std;

void addedge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int v)
{
    for (int i = 0; i < v; i++)
    {
        for (int x : adj[i])
            cout << x << " ";
        cout << "\n";
    }
}

int main()
{

    int n, m;
    cin >> n >> m;

    vector<int> adj[n + 1];

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        // this two condition for undirected graph
         adj[u].push_back(v);
         adj[v].push_back(u);

        // this is for directed graph
        // adj[u].push_back(v);
    }
    for (int i = 0; i < n; i++)
    {
        for (int x : adj[i])
            cout << x << " ";
        cout << "\n";
    }

}
