#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="UD";
    int n=s.size();
      if(n%2!=0)
      {
        return false;
      }
       
      int v=0;
      int h=0;
      for(char ch:s)
      {
        switch(ch)
        {
           case 'U':v++;break;
           case 'D':v--;break;
           case 'L':h++;break;
           case 'R':h--;break;
        }
      }
     if(v==0&&h==0)
     {
        cout<<"TRUE";
     }
     else
     {
        cout<<"FALSE";
     }
    
}