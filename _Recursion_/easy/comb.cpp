#include <bits/stdc++.h>
using namespace std;

void comb(vector<int> v, vector<vector<int>> &ans, int index)
{
    int n = v.size();

    if (index == n)
    {
        ans.push_back(v);
    }

   
   for(int i=index;i<n;i++)
   {
    swap(v[index],v[i]);
    comb(v,ans,index+1);
    swap(v[index],v[i]);
   }
}

int main()
{
    vector<int> v = {1, 2, 3};
    vector<vector<int>> ans;
    int index = 0;
    comb(v, ans, index);

    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}