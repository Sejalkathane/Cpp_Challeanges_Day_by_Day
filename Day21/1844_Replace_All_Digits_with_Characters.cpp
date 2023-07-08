#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="a1c1e1e";
     string str="";
        for(int i=0;i<s.size();i+=2)
        {
           char c=s[i];
           if(isdigit(s[i+1])){
           char d=s[i+1];
           int a=int(d-'0');
           
           char e=c+a;
           str+=c;
           str+=e;
           }
           else
           {
             str+=c;
           }
        }
        cout<<str;
}