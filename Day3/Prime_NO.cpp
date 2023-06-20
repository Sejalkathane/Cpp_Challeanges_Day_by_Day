#include<bits/stdc++.h>
using namespace std;

//simple approch

// bool isprime(int num)
// {
//     for(int i=2;i<num;i++)
//     {
//         if(num%i==0)
//         {
//             return false;
//         }
//     }
//     return true;
// }


// ??another

bool isprime(int n)
{
    if(n==1)
       return false;
    
    if(n==2 || n==3)
       return true;

    if(n%2==0 || n%3==0)
        return false;

    for(int i=5;i*i<=n;i=i+6)
    {
        if(n%i==0 || n%(i+2)==0)
             return false;
    }

    return true;
}

int main()
{
   int n=47;

   if(isprime(n)==true)
   {
    cout<<"Prime"<<" " ;
   }
   else{
    cout<<"NOT A Prime"<<" ";
   }
    
    
    return 0;
}