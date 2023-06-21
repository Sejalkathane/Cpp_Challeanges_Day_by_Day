#include<bits/stdc++.h>
using namespace std;

bool ispali(string s)
   {
       int n=s.size();
       int low=0;
       int high=n-1;

       while(low<=high)
       {
           if(s[low]!=s[high])
           {
               return false;
           }
           low++;
           high--;
       }
       return true;
   }


int main()
{
    vector<string>words={"abc","car","ada","racecar","cool"};
    string ans="";
        for(int i=0;i<words.size();i++)
        {
            if(ispali(words[i]))
            {
                  ans=words[i];
                  break;
            }
        }

        cout<<ans;
    
    return 0;
}

// Given an array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string "".

// A string is palindromic if it reads the same forward and backward.

// Example 1:

// Input: words = ["abc","car","ada","racecar","cool"]
// Output: "ada"
// Explanation: The first string that is palindromic is "ada".
// Note that "racecar" is also palindromic, but it is not the first.