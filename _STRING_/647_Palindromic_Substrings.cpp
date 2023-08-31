#include <bits/stdc++.h>
using namespace std;


// //Brute Force::
// bool pali(string s)
// {
//     int low = 0;
//     int high = s.size() - 1;

//     while (low < high)
//     {
//         if (s[low] != s[high])
//             return false;
//         low++;
//         high--;
//     }
//     return true;
// }

// int countSubstrings(string s)
// {
//     int n = s.size();
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++) // Changed j=i+1 to j=i
//         {
//             string str = s.substr(i, j - i + 1); // Corrected substring indexing
//             if (pali(str))
//                 count++;
//         }
//     }

//     return count;
// }


//O(n^2)
int c;
void check(string& s,int i,int j)
    {
        int l=i;
        int r=j;
        while(l>=0 && r<s.size() && (s[r]==s[l]))
        {
            c++;
            l--;
            r++;
        }
        return ;
    }
    int countSubstrings(string s) {
        c=0;
        for(int i=0;i<s.size();i++)
        {

            check(s,i,i);
            check(s,i,i+1);
        }
        return c;
}


int main()
{
     string s="aaa";
    cout<<countSubstrings(s);

    return 0;
}

// Given a string s, return the number of palindromic substrings in it.
// A string is a palindrome when it reads the same backward as forward.
// A substring is a contiguous sequence of characters within the string.

// Example 1:
// Input: s = "abc"
// Output: 3
// Explanation: Three palindromic strings: "a", "b", "c".

// Example 2:
// Input: s = "aaa"
// Output: 6
// Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".