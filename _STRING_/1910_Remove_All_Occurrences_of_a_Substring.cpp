#include <bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part)
{

    // Brute Force::O(k * n * m)

    bool t = true;
    while (t == true)
    {
        int pos = s.find(part);
        if (pos != std::string::npos)
        {
            s.erase(pos, part.length());
        }
        else
        {
            t = false;
        }
    }

    return s;

    // int i=0,j=0,k=part.length();
    //      // cout<<s.substr(0,3);
    //       while(j<s.length()){
    //           if(j-i+1<part.length()){
    //               j++;
    //           }else if(j-i+1==k){
    //               if(s.substr(i,k)==part){
    //                   s.erase(i,k);
    //                   i=0;j=0;
    //               }else{
    //                   j++;i++;
    //               }
    //           }
    //       }
    //       return s;
}

int main()
{
   string s = "daabcbaabcbc", part = "abc";
   cout<<removeOccurrences(s,part);
    return 0;
}