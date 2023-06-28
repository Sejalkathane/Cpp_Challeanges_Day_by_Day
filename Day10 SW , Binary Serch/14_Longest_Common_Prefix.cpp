#include <bits/stdc++.h>
using namespace std;

// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".
// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"

int main()
{
    vector<string> str = {"flower", "flow", "flight"};
    int n = str.size();

    sort(str.begin(), str.end());

    // /after  sorting all element inlne if it have commen prefix then 1st and last element enough to check

// first element
    string a = str[0];
    // last element
    string b = str[n - 1];
    string s = "";

   
    for (int i = 0; i < a.size(); i++)
    { 
        //check char by char
        if (a[i] == b[i])
        {
            //add if stisfy
            s += a[i];
        }
        else
        {
            break;
        }
    }
    cout << s;
    return 0;
}