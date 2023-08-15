#include <bits/stdc++.h>
using namespace std;

void shortest_distance(vector<vector<int>> &matrix)
{
    // Code
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = 1e9;
            }

            if (i == j)
                matrix[i][j] = 0;
        }
    }

    // 	k=path via tha t node::
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 1e9)
            {
                matrix[i][j] = -1;
            }
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {{0, 1, 43}, {1, 0, 6}, {-1, -1, 0}};
    shortest_distance(matrix);

    for (auto it : matrix)
    {
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}