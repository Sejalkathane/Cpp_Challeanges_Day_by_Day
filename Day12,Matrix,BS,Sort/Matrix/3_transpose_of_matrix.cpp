#include<bits/stdc++.h>
using namespace std;

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

    int temp[row][col];
   
      for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(i!=j)
            {
                temp[j][i]=arr[i][j];
            }
            else
            {
                temp[i][j]=arr[i][j];
            }
        }
    }


   for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           cout<<temp[i][j]<<" ";
        }
    }



    return 0;
}