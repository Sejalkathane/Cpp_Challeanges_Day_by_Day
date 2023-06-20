#include<bits/stdc++.h>
using namespace std;


// You are given a positive integer num consisting only of digits 6 and 9.

// Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).


int main()
{
    int num=9669;
    string s=to_string(num);
     for(int i=0;i<s.size();i++)
     {
        if(s[i]=='6') 
        {
            s[i]='9';
            break;
        }
     }
     cout<<stoi(s);
    
    return 0;
}