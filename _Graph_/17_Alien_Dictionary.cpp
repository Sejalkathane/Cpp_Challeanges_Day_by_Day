#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int k=4;
    vector<string>dict={"baa","abcd","abca","cab","cad"};

    vector<int>adj[k];

    for(int i=0;i<n-1;i++)
    { 
         string s1=dict[i];
         string s2=dict[i+1];
         bool t=true;
         int j=0;

         //important condition
         while(t == true && j < min(s1.size(), s2.size()))
         { 
            if(s1[j]!=s2[j])
            {
                t=false;
                adj[s1[j]-'a'].push_back(s2[j]-'a');
            }
            j++;
         }    
    }
     
     vector<int>indeg(k);

     for(int i=0;i<k;i++)
     {
        for(auto it:adj[i])
        {
            indeg[it]++;
        }
     }



     queue<int> q;

    for (int i = 0; i < k; i++)
    {
        if (indeg[i] == 0)
        { 
            q.push(i);
        }
    }

    vector<char> ans;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node+'a');

        for (auto it : adj[node])
        {
            indeg[it]--;
            if (indeg[it] == 0)
            {
                q.push(it);
            }
        }
    }


     for(int i=0;i<ans.size();i++)
     {
        cout<<ans[i]<<" ";
     }
    return 0;
}