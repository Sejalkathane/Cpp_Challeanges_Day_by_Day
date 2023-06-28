#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="abcde";
    string goal="cdeab";
      if(s.size()!=goal.size())
        {
          cout<<false;
          return 0;
        }
       string str=s+s;
       if(str.find(goal)!=string::npos)
       {
         cout<<true;
         return 0;
       }
     
         cout<<false;

}