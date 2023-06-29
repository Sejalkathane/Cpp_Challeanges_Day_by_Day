#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ex. 1 2 3
    //     4 5 6
    //     7 8 9

    //     print:: 1 2 3 6 5 4 7 8 9;

    int row, col;
    cout << "Enter number of rows you needed : ";
    cin >> row;
    cout << endl;
    cout << "Enter number of columns you needed : ";
    cin >> col;
    cout << endl;

    cout << "Enter " << row << " * " << col << " Matrix:: " << endl;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> v;
    for (int i = 0; i < row; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < col; j++)
            {
                v.push_back(arr[i][j]);
            }
        }
        else
        {
            for (int j = col-1; j >=0; j--)
            {
                v.push_back(arr[i][j]);
            }
        }
    }

    // print
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}