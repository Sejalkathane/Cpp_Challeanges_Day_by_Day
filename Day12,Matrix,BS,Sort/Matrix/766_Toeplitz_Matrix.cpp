#include<bits/stdc++.h>
using namespace std;

int main()
{
    //true;
    vector<vector<int>>v= {{1,2,3,4},{5,1,2,3},{9,5,1,2}}; 

    //false;
    // vector<vector<int>>v= {{1,2},{2,2}};

    int row=v.size();
    int col=v[0].size();

    for(int i=1;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            if(v[i][j]!=v[i-1][j-1])
            {
                 cout<<"false";
                 return 0;
            }
        }
    }
    cout<<"true";

}