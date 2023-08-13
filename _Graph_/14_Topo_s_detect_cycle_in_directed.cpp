#include <bits/stdc++.h>
using namespace std;

bool isCyclic(int V, vector<int> adj[])
{
    // code here
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

    int count = 0;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        count++;

        for (auto it : adj[node])
        {
            indegre[it]--;
            if (indegre[it] == 0)
            {
                q.push(it);
            }
        }
    }

    // if it same mens not contain cycle
    if (count == V)
        return false;
    // contain cycle
    return true;
}

int main()
{
     int V = 5;
    vector<int> adj[V];
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[3].push_back(4);
    adj[3].push_back(5);
    adj[4].push_back(2);

    if(isCyclic(V,adj)) cout<<"True";
    else cout<<"false";

    return 0;
}