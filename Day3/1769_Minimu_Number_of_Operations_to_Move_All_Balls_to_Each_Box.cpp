#include<bits/stdc++.h>
using namespace std;


//You have n boxes. You are given a binary string boxes of length n, where boxes[i] is '0' if the ith box is empty, and '1' if it contains one ball.
// In one operation you can move one ball from a box to an adjacent box. Box i is adjacent to box j if abs(i - j) == 1. Note that after doing so, there may be more than one ball in some boxes.

// Return an array answer of size n, where answer[i] is the minimum number of operations needed to move all the balls to the ith box.

// Each answer[i] is calculated considering the initial state of the boxes.

// Input: boxes = "110"
// Output: [1,1,3]

int main()
{
    string s="001011";
     vector<int>v;
        int n=s.size();
        for(int i=0;i<n;i++)
       {
           int sum=0;
           for(int j=0;j<n;j++)
           {
               if(s[j]=='1')
               {
                 sum+=abs(i-j);
               }
           }
           v.push_back(sum);
       }

       for(int i=0;i<v.size();i++)
       {
        cout<<v[i]<<" ";
       }

    
    return 0;
}