// The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
// Given two integers x and y, return the Hamming distance between them.


// Example 1:
// Input: x = 1, y = 4
// Output: 2
// Explanation:
// 1   (0 0 0 1)
// 4   (0 1 0 0)
//        ↑   ↑
// The above arrows point to positions where the corresponding bits are different.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    //  int x=1;
    //  int y=4;

    int x=3;
    int y=1;
     int count=0;
     for(int i=31;i>=0;i--)
     {
        int first=(x&(1<<i));
        int second=(y&(1<<i));

        if(first!=second) count++;
     }
     cout<< count;

}