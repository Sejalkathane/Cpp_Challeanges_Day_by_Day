#include <bits/stdc++.h>
using namespace std;

int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int k)
{
    // create adj list put in it
    vector<pair<int, int>> adj[n];
    for (auto it : flights)
    {
        adj[it[0]].push_back({it[1], it[2]});
    }

    // {stops,{node,dist}}  store in queue
    queue<pair<int, pair<int, int>>> q;
    q.push({0, {src, 0}});

    //dist vector
    vector<int> dist(n, 1e9);
    dist[src] = 0;

    //track queue
    while (!q.empty())
    {
        int stops = q.front().first;
        int node = q.front().second.first;
        int dis = q.front().second.second;

        q.pop();

        if (stops > k)
            continue;


        // extract node
        for (auto it : adj[node])
        {
            int adjnode = it.first;
            int adjdist = it.second;
            
            //check condition
            if (dis + adjdist < dist[adjnode] && stops <= k)
            {
                dist[adjnode] = dis + adjdist;
                q.push({stops + 1, {adjnode, (dis + adjdist)}});
            }
        }
    }

    if (dist[dst] == 1e9)
        return -1;
    return dist[dst];
}

int main()
{
    int n = 4;
    int src = 0, dst = 3, k = 1;
    vector<vector<int>> flights = {{0, 1, 100}, {1, 2, 100}, {2, 0, 100}, {1, 3, 600}, {2, 3, 200}};
    cout << findCheapestPrice(n, flights, src, dst, k);
    return 0;
}