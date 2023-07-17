#include <bits/stdc++.h>
using namespace std;

// Input: s = "abc", shifts = [3,5,9]
// Output: "rpl"
// Explanation: We start with "abc".
// After shifting the first 1 letters of s by 3, we have "dbc".
// After shifting the first 2 letters of s by 5, we have "igc".
// After shifting the first 3 letters of s by 9, we have "rpl", the answer.
int main()
{
    string s = "abc";
    vector<int> shifts = {3, 5, 9};

    // use reverse prefix sum  [17,14,9] noew we need to move every char according to it
    for (int i = shifts.size() - 2; i >= 0; i--)
    {
        shifts[i] = (shifts[i] + shifts[i + 1]) % 26; //%26 reduce overflow_error
    }

    for (int i = 0; i < s.size(); i++)
    {
        s[i] = 'a' + (s[i] - 'a' + shifts[i]) % 26;
    }

    // TLE:for large value
    //     for (long long int i = 0; i < shifts.size(); i++)
    //     {
    //         for (long long int j = 0; j < i + 1; j++)
    //         {
    //             s[j] = 'a' + (s[j] - 'a' + shifts[i]) % 26;
    //         }
    //     }
    cout << s;
}