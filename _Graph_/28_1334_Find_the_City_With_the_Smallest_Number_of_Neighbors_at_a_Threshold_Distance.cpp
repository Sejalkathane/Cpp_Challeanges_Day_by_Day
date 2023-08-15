#include <bits/stdc++.h>
using namespace std;

// same as floyd

int findTheCity(int n, vector<vector<int>> &edges, int distanceThreshold)
{
    vector<vector<int>> matrix(n, vector<int>(n, INT_MAX));
    for (auto it : edges)
    {
        matrix[it[0]][it[1]] = it[2];
        matrix[it[1]][it[0]] = it[2];
    }

    for (int i = 0; i < n; i++)
    {
        matrix[i][i] = 0;
    }

    // 	k=path via tha t node::
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][k] == INT_MAX || matrix[k][j] == INT_MAX)
                    continue;
                else
                {
                    matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
                }
            }
        }
    }

    // row no
    int cityno = -1;
    // count how manu col in given row <trashold
    int countcity = n;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] <= distanceThreshold)
            {
                count++;
            }
        }
        if (count <= countcity)
        {
            countcity = count;
            cityno = i;
        }
    }

    return cityno;
}

int main()
{
    int n = 4, distanceThreshold = 4;
    vector<vector<int>> edges = {{0, 1, 3}, {1, 2, 1}, {1, 3, 4}, {2, 3, 1}};
    cout << findTheCity(n, edges, distanceThreshold);
    return 0;
}