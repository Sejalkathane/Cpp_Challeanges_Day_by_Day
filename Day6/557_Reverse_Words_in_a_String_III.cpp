#include<bits/stdc++.h>
using namespace std;

// Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.
// Example 1:
// Input: s = "Let's take LeetCode contest"
// Output: "s'teL ekat edoCteeL tsetnoc"

int main()
{
    string s = "Let's take LeetCode contest";
    
    int n=s.size();
     int i=0;
    for(int j=0;j<=n;j++)
    {
       if(s[j]==' ' || j==n)
       {
         reverse(s.begin()+i , s.begin()+j);
         i=j+1;
       }
    }
    cout<<s;
    return 0;
}