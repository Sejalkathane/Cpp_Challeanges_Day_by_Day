#include <bits/stdc++.h>
using namespace std;

int countPaths(int n, vector<vector<int>> &roads)
{
    vector<vector<pair<int, int>>> adj(n);
    for (auto it : roads)
    {
        adj[it[0]].push_back({it[1], it[2]});
        adj[it[1]].push_back({it[0], it[2]});
    }

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push({0, 0});

    vector<long long> dist(n, LONG_MAX); // Assuming all distances are the same
    vector<int> way(n, 0);

    dist[0] = 0;
    way[0] = 1;

    int mod = (int)(1e9 + 7);

    while (!pq.empty())
    {
        long long dis = pq.top().first;
        long long node = pq.top().second;
        pq.pop();

        for (auto it : adj[node])
        {
            long long adjnode = it.first;
            long long adjwt = it.second;

            if (dis + adjwt < dist[adjnode])
            {
                dist[adjnode] = adjwt + dis;
                pq.push({dist[adjnode], adjnode});
                way[adjnode] = way[node];
            }
            else if (dis + adjwt == dist[adjnode])
            {
                way[adjnode] = (way[adjnode] + way[node]) % mod;
            }
        }
    }

    return way[n - 1] % mod;
}

int main()
{
   int  n = 7;
   vector<vector<int>>roads = {{0,6,7},{0,1,2},{1,2,3},{1,3,3},{6,3,3},{3,5,1},{6,5,1},{2,5,1},{0,4,5},{4,6,2}};
    cout<<countPaths(n,roads);
    return 0;
}