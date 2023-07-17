#include<bits/stdc++.h>
using namespace std;

// Input: s = "a1b2c3d4e"
// Output: "abbdcfdhe"
// Explanation: The digits are replaced as follows:
// - s[1] -> shift('a',1) = 'b'
// - s[3] -> shift('b',2) = 'd'
// - s[5] -> shift('c',3) = 'f'
// - s[7] -> shift('d',4) = 'h'

int main()
{
    string s="a1b2c3d4e";

    for(int i=0;i<s.size();i++)
    {
        if(isdigit(s[i]))
        {
           s[i]=s[i-1]+s[i]-'0';
        }
    }
    cout<<s;
    


    return 0;
}