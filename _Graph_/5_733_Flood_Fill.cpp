#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &image, int i, int j, int c0, int c1)
{
    if (i < 0 || j < 0 || i >= image.size() || j >= image[0].size() || image[i][j] == c1 || image[i][j] != c0)
    {
        return;
    }

    image[i][j] = c1;
    dfs(image, i + 1, j, c0, c1);
    dfs(image, i - 1, j, c0, c1);
    dfs(image, i, j + 1, c0, c1);
    dfs(image, i, j - 1, c0, c1);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
{
    int c0 = image[sr][sc];
    dfs(image, sr, sc, c0, newColor);
    return image;
}

int main()
{
//     Input: image = [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, color = 2
// Output: [[2,2,2],[2,2,0],[2,0,1]]
    
    vector<vector<int>>image={{1,1,1},{1,1,0},{1,0,1}};
    int sr=1;
    int sc=1;
    int color=2;
   vector<vector<int>>ans= floodFill(image,sr,sc,color);


   for(int i=0;i<ans.size();i++)
   {
    for(int j=0;j<ans[0].size();j++)
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
   }
}