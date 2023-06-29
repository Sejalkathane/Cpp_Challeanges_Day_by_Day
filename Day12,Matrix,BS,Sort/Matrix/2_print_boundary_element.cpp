#include <bits/stdc++.h>
using namespace std;

// Print Boundary element means::
//  eg::  1  2  3  4
//   5  6  7  8
//   9 10 11 12

//  Print:: 1 2 3 4 8 12 11 10 9 5

int main()
{

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
   
     
    // condition for sngle column and single row;
    vector<int>v;

    if(row==1)
    {
        for(int i=0;i<col;i++)
        {
           v.push_back(arr[0][i]);
        }
    }
     
    if(col==1)
    {
        for(int i=0;i<row;i++)
        {
           v.push_back(arr[i][0]);
        }
    }

    if(row>1 && col>1)
    {
        for(int i=0;i<col;i++)
        {
            v.push_back(arr[0][i]);
        }
        for(int i=1;i<row;i++)
        {
            v.push_back(arr[i][col-1]);
        }
        for(int i=col-2;i>=0;i--)
        {
            v.push_back(arr[row-1][i]);
        }
        for(int i=row-2;i>0;i--)
        {
            v.push_back(arr[i][0]);
        }
    }
   

     // print
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}