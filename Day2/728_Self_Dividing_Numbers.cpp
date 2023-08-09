#include<bits/stdc++.h>
using namespace std;

// A self-dividing number is a number that is divisible by every digit it contains.

// For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.
// A self-dividing number is not allowed to contain the digit zero.
                 
// Given two integers left and right, return a list of all the self-dividing numbers in the range [left, right].

 

// Example 1:

// Input: left = 1, right = 22
// Output: [1,2,3,4,5,6,7,8,9,11,12,15,22]



bool isSelfDivide(int num)
{
    int temp=num;
    int res=0;

    while(temp)
    {
        res=temp%10;
        if(res==0 || num%res!=0)
            return false;
        
        temp/=10;
    }
    return true;
}

int main()
{
    int left=1,right=22;

    vector<int>v;

    for(int i=left;i<=right;i++)
    {
        if(isSelfDivide(i))
        {
            v.push_back(i);
        }
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}