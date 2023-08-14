#include <bits/stdc++.h>
using namespace std;


//::::::::::::::  USING PQ :::::::::::::::::::::
// vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
// {
//     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

//     vector<int> dist(V, 1e9);

//     // make source 0;
//     dist[S] = 0;
//     pq.push({0, S});

//     while (!pq.empty())
//     {
//         int dis = pq.top().first;
//         int node = pq.top().second;
//         pq.pop();

//         for (auto it : adj[node])
//         {
//             //traverse it further:
//             int edgewt = it[1];  // store weight
//             int adjnode = it[0]; // store node

//             // IMP
//             if (dis + edgewt < dist[adjnode])
//             {
//                 dist[adjnode] = dis + edgewt;
//                 pq.push({dist[adjnode], adjnode});
//             }
//         }
//     }

//     return dist;
// }





//:::::::::::::::::::::::: USING SET ::::::::::::::::::::::

vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
{
    set<pair<int,int>>st;
    vector<int> dist(V, 1e9);

    // make source 0;
    dist[S] = 0;
    st.insert({0,S});

    while (!st.empty())
    {
        //set way to iter pair::
        auto it=*(st.begin());
        int dis = it.first;
        int node = it.second;
        st.erase(it);      //erase in set 

        for (auto it : adj[node])
        {
            //traverse it further:
            int edgewt = it[1];  // store weight
            int adjnode = it[0]; // store node

            // IMP
            if (dis + edgewt < dist[adjnode])
            {
                dist[adjnode] = dis + edgewt;
                st.insert({dist[adjnode], adjnode});
            }
        }
    }

    return dist;

}







int main()
{
   int V = 3, E = 3,S=2;
   vector<vector<int>> adj[]={{{1, 1}, {2, 6}}, {{2, 3}, {0, 1}}, {{1, 3}, {0, 6}}};

   vector<int>ans=dijkstra(V,adj,S);

   for(int i=0;i<ans.size();i++)
   {
      cout<<ans[i]<<" ";
   }
    return 0;
}

// Given a weighted, undirected and connected graph of V vertices
// and an adjacency list adj where adj[i] is a list of lists containing
// two integers where the first integer of each list j denotes there is
// edge between i and j , second integers corresponds to the weight of
// that  edge . You are given the source vertex S and You to Find the shortest
// distance of all the vertex's from the source vertex S. You have to return
// a list of integers denoting shortest distance between each node and Source vertex S.