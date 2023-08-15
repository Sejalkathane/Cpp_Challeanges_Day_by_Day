#include <bits/stdc++.h>
using namespace std;

int spanningTree(int V, vector<vector<int>> adj[])
{
    // Sc.O(E)
    int sum = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    //   {weight,current}
    pq.push({0, 0});

    vector<int> vis(V, 0);

    //   E logE +E logE
    //  TC. E logE
    while (!pq.empty())
    {
        // log E
        auto it = pq.top();
        int wt = it.first;
        int node = it.second;
        pq.pop();

        if (vis[node] == 1)
            continue;

        //   :::when you add to mst:::
        vis[node] = 1;
        sum += wt;

        // E log E
        for (auto it : adj[node])
        {
            int adjnode = it[0];
            int adjwt = it[1];

            if (!vis[adjnode])
            {
                pq.push({adjwt, adjnode});
            }
        }
    }

    return sum;
}

int main()
{
    int V=3;
    
// 0 1 5
// 1 2 3
// 0 2 1

//   int spanningTree(int V, vector<vector<int>> adj[])

    return 0;
}