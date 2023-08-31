#include <bits/stdc++.h>
using namespace std;

string maxValue(string n, int x)
{
    // string ans;
    // int n=s.size();

    //    if(s[0]!='-')
    //    {
    //      bool t=true;
    //      for(int i=0;i<n;i++)
    //      {
    //        if(s[i]-'0'< x && t==true)
    //        {

    //           ans+=to_string(x);
    //           t=false;
    //        }
    //        ans+=s[i];
    //      }
    //      if(t==true) ans+=to_string(x);
    //    }
    //    else
    //    {
    //      bool t=true;
    //      ans+='-';
    //      for(int i=1;i<n;i++)
    //      {
    //        if(s[i]-'0'> x && t==true)
    //        {

    //           ans+=to_string(x);
    //           t=false;
    //        }
    //        ans+=s[i];
    //      }
    //      if(t==true) ans+=to_string(x);

    //    }

    //    return ans;

    int len = n.size() - 1;
    int ans = len + 1;
    if (n[0] == '-')
    {
        for (int i = len; i >= 1; --i)
        {
            if (n[i] - '0' > x)
                ans = i;
        }
    }
    else
    {
        for (int i = len; i >= 0; --i)
        {
            if (n[i] - '0' < x)
                ans = i;
        }
    }
    n.insert(n.begin() + ans, x + '0');
    return n;
}

int main()
{
    string n = "-13";
    int  x = 2;

    cout<<maxValue(n,x);

}

// You are given a very large integer n, represented as a string,​​​​​​ and an integer
// digit x. The digits in n and the digit x are in the inclusive range [1, 9],
// and n may represent a negative number.

// You want to maximize n's numerical value by inserting x anywhere in the decimal
//  representation of n​​​​​​. You cannot insert x to the left of the negative sign.

// For example, if n = 73 and x = 6, it would be best to insert it between 7 and 3, making n = 763.
// If n = -55 and x = 2, it would be best to insert it before the first 5, making n = -255.
// Return a string representing the maximum value of n​​​​​​ after the insertion.

// Example 1:

// Input: n = "99", x = 9
// Output: "999"
// Explanation: The result is the same regardless of where you insert 9.
// Example 2:

// Input: n = "-13", x = 2
// Output: "-123"
// Explanation: You can make n one of {-213, -123, -132}, and the largest of those three is -123.