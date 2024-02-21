#include <bits/stdc++.h>
using namespace std;


//memoization:: 
// int fib(int n, vector<int> &dp)
// {

//     if (n <= 1)
//         return n;
//     if (dp[n] != -1)
//         return dp[n];

//     return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
// }



int main()
{
    int n = 5;
    vector<int> dp(n + 1, -1);
    // cout << fib(n, dp);

       
    //tabulation
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n];
}
