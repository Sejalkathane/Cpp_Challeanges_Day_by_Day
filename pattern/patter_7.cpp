#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {   
          cout<<" ";
        }           
        for(int k=0;k<n;i++)    
        {
            cout<<"*";
        }      
        cout<<" ";                 
    }
    return 0;
}