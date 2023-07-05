#include<bits/stdc++.h>
using namespace std;

// Input: n = 4, k = 2
// Output: [[1,2],[1,3],[1,4],[2,3],[2,4],[3,4]]
// Explanation: There are 4 choose 2 = 6 total combinations.
// Note that combinations are unordered, i.e., [1,2] and [2,1] are considered to be the same combination.
void find_combo(vector<vector<int>>res,vector<int>ds,int index,int n,int k)
{
    if(ds.size()==k)
    {
        res.push_back(ds);
        return;
    }

    for(int i=index;i<n;i++)
    {
        ds.push_back(i+1);
        find_combo(res,ds,i+1,n,k);
        ds.pop_back();
    }
}
int main()
{
    vector<vector<int>>res;
    vector<int>ds;
    
    int n=4;
    int k=2;
    find_combo(res,ds,0,n,k);
    return 0;
}