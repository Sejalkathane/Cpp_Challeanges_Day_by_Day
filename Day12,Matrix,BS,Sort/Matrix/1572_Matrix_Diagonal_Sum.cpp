#include <bits/stdc++.h>
using namespace std;

// Input: mat = [[1,2,3],
//               [4,5,6],
//               [7,8,9]]
// Output: 25
// Explanation: Diagonals sum: 1 + 5 + 9 + 3 + 7 = 25
// Notice that element mat[1][1] = 5 is counted only once.

int main()
{
    vector<vector<int>> mat = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};
    int x = 0, y = 0, n = mat.size();
   
    for(int i=0;i<n;i++)
    {
        x=x+mat[i][i];
        y=y+mat[i][n-i-1];
    }
    if(n%2==0)
       cout<<x+y;
    cout<<x+y-mat[n/2][n/2];
    

    return 0;
}