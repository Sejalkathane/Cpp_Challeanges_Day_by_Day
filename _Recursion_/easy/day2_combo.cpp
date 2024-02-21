#include <bits/stdc++.h>
using namespace std;

int main()
{

    // largest odd number::
    // string s = "35427";
    // string s = "52";
    string s = "4206";
    int n = s.size();
    // cout<<n<<endl;
    int maxi = 0;

    // basic method:
    //  for (int i = 0; i < n; i++)
    //  {
    //      string str = "";
    //      str += s[i];
    //      if (stoi(str) > maxi)
    //          {
    //              if (stoi(str) % 2 != 0)
    //              {
    //                  maxi = stoi(str);
    //              }
    //          }

    //     for (int j = i + 1; j < n; j++)
    //     {
    //         str += s[j];
    //         if (stoi(str) > maxi)
    //         {
    //             if (stoi(str) % 2 != 0)
    //             {
    //                 maxi = stoi(str);
    //             }
    //         }
    //     }
    // }
    // cout << maxi;

    // optimize it::
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (int(s[i]) % 2)
        {
            cout << s.substr(0, i + 1);
        }
    }
    cout << "";
}
// You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists.

// A substring is a contiguous sequence of characters within a string.

// Example 1:
// Input: num = "52"
// Output: "5"
// Explanation: The only non-empty substrings are "5", "2", and "52". "5" is the only odd number.

// Example 2:
// Input: num = "4206"
// Output: ""
// Explanation: There are no odd numbers in "4206".

// Example 3:
// Input: num = "35427"
// Output: "35427"
// Explanation: "35427" is already an odd number.

// Constraints:

// 1 <= num.length <= 105
// num only consists of digits and does not contain any leading zeros.