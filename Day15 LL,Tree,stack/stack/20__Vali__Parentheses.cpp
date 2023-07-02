#include<bits/stdc++.h>
using namespace std;

int main()
{
    //check valid parenthesis 
    string s="(({{()[]{}}}))";

    stack<int>sq;
    for(auto i :s)
    {
        if(i=='(' || i=='{' || i=='[')
        {
            sq.push(i);
        }
        else
        {
            if(sq.empty()|| (sq.top()=='(' && i!=')') ||(sq.top()=='{' && i!='}') || (sq.top()=='[' && i!=']'))
                { cout<<"False";
                 return 0;} 
          
           sq.pop();
        }

    }

    
    cout<<"True"<<endl;
   
}