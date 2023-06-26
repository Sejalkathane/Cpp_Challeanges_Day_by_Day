#include <bits/stdc++.h>
using namespace std;

// Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.
// Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

// Example 1:

// Input: s = "abciiidef", k = 3
// Output: 3
// Explanation: The substring "iii" contains 3 vowel letters.

int main()
{
  string s = "abciiidef";
  int k = 3;

  int ans = 0;
  int count = 0;

  for (int i = 0; i < s.length(); i++)
  {

    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
      count++;

    if (i >= k)
    {

      if (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' || s[i - k] == 'o' || s[i - k] == 'u')
        count--;
    }

    ans = max(ans, count);
  }

  cout<<ans;
}