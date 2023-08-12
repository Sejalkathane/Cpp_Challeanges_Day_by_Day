#include <bits/stdc++.h>
using namespace std;

// bool isBipartite(vector<vector<int>>& graph)
// {
//    int n=graph.size();
//   vector<int>color(n,0);
//   queue<int>q;

//   for(int i=0;i<n;i++)
//   {
//     if(color[i]) continue;

//     color[i]=1;
//     q.push(i);

//     while(!q.empty())
//     {
//       int node=q.front();

//       for(auto it:graph[node])
//       {
//         if(!color[it])
//         {
//           color[it]= -color[node];
//           q.push(it);
//         }
//         else if(color[it]==color[node])
//         {
//           return false;
//         }

//       }
//        q.pop();
//     }
//   }

//   return true;
// }




//::::::::::::::::::::BFS STRIVER:::::::::::::::::::::::::::::::


//  bool bfs(int start, vector<vector<int>>& graph, vector<int> &color){

//     color[start] = 0;
//     queue<int> q;
//     q.push(src);

//     while(!q.empty()){
//         int node = q.front();
//         q.pop();

//         for(auto it : graph[node]){
//             if(color[it] == -1){
//                 color[it] = !color[node];
//                 q.push(it);
//             }
//             else if (color[it] == color[node]){
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// bool isBipartite (vector<vector<int>>& graph)
// {
//    int n=graph.size();
//     vector<int> color(n, -1);

//     //for disjoint graph
//     for(int i=0; i<n; i++){
//         if(color[i] == -1){
//             if(bfs(i, graph, col) == false){
//                return false;
//             }
//         }
//     }
//     return true;
// }





// ::::::::::::::::::::::::DFS::::::::::::::::::::::::::::::


bool dfs(int src, vector<vector<int>> &graph, vector<int> &color)
{

    for (auto it : graph[src])
    {
        if (color[it] == -1)
        {
            color[it] = !color[src];
            bool res = dfs(it, graph, color);
            if (res == false)
                return false;
        }
        else if (color[it] == color[src])
        {
            return false;
        }
    }
    return true;
}

bool isBipartite(vector<vector<int>> &graph)
{
    int n = graph.size();
    vector<int> color(n, -1);

    for (int i = 0; i < n; i++)
    {
        if (color[i] == -1)
        {
            color[i] = 0;
            if (dfs(i, graph, color) == false)
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    vector<vector<int>>graph={{1,2,3},{0,2},{0,1,3},{0,2}};

    cout<<isBipartite(graph);

    return 0;
}