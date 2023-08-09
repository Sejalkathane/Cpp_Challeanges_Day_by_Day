#include <bits/stdc++.h>
using namespace std;

// Input:
// N = 3
// W = 4
// values[] = {1,2,3}
// weight[] = {4,5,1}
// Output: 3

int knapsack(vector<int> &wt, vector<int> &vl, int w, int n)
{
    if (w == 0 || n == 0)
        return 0;

    if (wt[n - 1] < w) // then two possiblity include or not
    {
        return max(vl[n - 1] + knapsack(wt, vl, w - wt[n - 1], n - 1), knapsack(wt,vl,w,n-1));
    }
    else if(wt[n-1]>w)
    {
        return knapsack(wt,vl,w,n-1);
    }
    return 0;
}

int main()
{
    int n = 3;
    int w = 7;

    vector<int> value = {1, 3,4,5};
    vector<int> weight = {1,4,5,7};

    cout<<knapsack(weight, value, w, n);

    return 0;
}