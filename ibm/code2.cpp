#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Hi i am sejal
    // unordered_map<string,int>mp={'sejal','ojala','eefaf'};
    // string s="Hi i am sajal";


vector<int>v={1,2,3,4,4,6};
 priority_queue<int,vector<int,greater<int>>>q;
 for(auto a:v)
 {
    q.push(a);
 }

 cout<< q.top();

    return 0;
}