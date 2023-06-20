#include<bits/stdc++.h>
using namespace std;

// #Josephus problem

int main()
{
    int n = 6, k = 2;
    //iterative solution
     
      int ans = 0;
        for (int i = 1; i <= n; i++) 
               ans = (ans + k) % i;

        cout<<ans + 1;
   
}