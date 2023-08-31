#include <bits/stdc++.h>
using namespace std;


bool canConstruct(string s, int k)
{
    // int n=s.size();
    // if(n<k) return false;
    // unordered_map<int,int>mp;

    // for(int i=0;i<n;i++)
    // {
    //   mp[s[i]]++;
    // }

    // int count=0;
    // for(auto a:mp)
    // {
    //     count+=(a.second%2);c
    // }

    // return count<=k;

    if (s.size() < k)
        return false;

    vector<int> freq(26);
    for (auto ch : s)
        freq[ch - 'a']++;

    int odd = 0;
    for (auto f : freq)
        odd += (f % 2);

    return odd <= k;
}

int main()
{
    string s = "annabelle";
    int k = 2;
    cout<<canConstruct(s,k);
    return 0;
}

// Given a string s and an integer k, return true if you can use all the characters
// in s to construct k palindrome strings or false otherwise.

// Example 1:

// Input: s = "annabelle", k = 2
// Output: true
// Explanation: You can construct two palindromes using all characters in s.
// Some possible constructions "anna" + "elble", "anbna" + "elle", "anellena" + "b"
// Example 2:

// Input: s = "leetcode", k = 3
// Output: false
// Explanation: It is impossible to construct 3 palindromes using all the characters of s.
// Example 3:

// Input: s = "true", k = 4
// Output: true
// Explanation: The only possible solution is to put each character in a separate string.