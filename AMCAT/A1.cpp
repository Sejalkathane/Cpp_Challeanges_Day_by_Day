#include <bits/stdc++.h>
using namespace std;

// Ques. Print the following Pattern and get the OutPut?
// N=5
// Output
// 1
// 3*2
// 4*5*6
// 10*9*8*7
// 11*12*13*14*15

///  Patter1

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// int main()
// {
//     int num = 1;
//     for (int i = 1; i <= 5; i++)
//     {

//         for (int j = 1; j <= i; j++)
//         {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
// }

int main()
{
    int num = 1;
    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = i; j > 0; j--)
            {
                cout << num + j - 1;
                if (j > 1)
                {
                    cout << "*";
                }
            }
        }
        else
        {
            for (int j = 0; j < i; j++)
            {
                cout << num + j;
                if (j < i - 1)
                {
                    cout << "*";
                }
            }
        }
        num += i;
        cout << endl;
    }
}