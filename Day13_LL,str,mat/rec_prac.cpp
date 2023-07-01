#include<bits/stdc++.h>
using namespace std;

// void print_name(int n)
// {
//     if(n==0)
//     {
//         return;
//     }
                                  
//     cout<<"Sejal"<<endl;          
//     print_name(n-1);  //  -------- again go function  start from 1st
//     cout<<"Kathane"<<endl;
// }

void print_no(int n,int i)
{
    if(i>n)
    {
        return;
    }
                                  
    cout<<i<<endl; 
    i++;       
    print_no(n,i);
    //return 5-1  
    // print_no(n-1);  //  -------- again go function  start from 1st
}

int main()
{
    int n=5;
    // print_name(n);
    int i=0;
    print_no(n,i);
    return 0;
}