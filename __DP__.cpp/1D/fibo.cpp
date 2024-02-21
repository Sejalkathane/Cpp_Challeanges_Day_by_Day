#include<bits/stdc++.h>
using namespace std;

int memo(int n,vector<int>dp)
{
    if(n<=1) return n;
    if(dp[n]!= -1) return dp[n];

    return dp[n]=memo(n-1,dp)+memo(n-2,dp);
}

int tabu(int n,vector<int>dp)
{
     dp[0]=0;
     dp[1]=1;

     for(int i=2;i<=n;i++)
     {  
        dp[i]=dp[i-1]+dp[i-2];
     }
     return dp[n];
}

int main()
{
    int n=6;
    vector<int>dp(n+1,-1);
    cout<<memo(n,dp)<<endl;
    cout<<tabu(n,dp);

}