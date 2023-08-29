#include <bits/stdc++.h>
using namespace std;

// only fail condition is products and searchword not provide

//  O(n * log n + m * 3 * log n), which simplifies to O((n + m) * log n). ==>   TC
//  O(n) ==> SC

// vector<vector<string>> suggestedProducts(vector<string> &products, string searchWord)
// {
//     vector<vector<string>> ans;
//     int n = products.size();
//     if (products.empty())
//     {
//         return ans;
//     }

//     priority_queue<string, vector<string>, greater<string>> pq;
//     for (int i = 0; i < n; i++)
//     {
//         pq.push(products[i]);
//     }

//     int m = searchWord.size();

//     for (int j = 1; j <= m; j++)
//     {
//         int k = 3;
//         priority_queue<string, vector<string>, greater<string>> tempPQ = pq;
//         vector<string> a;
//         while (k > 0 && !tempPQ.empty())
//         {
//             string s = tempPQ.top();
//             tempPQ.pop();
//             if (s.substr(0, j) == searchWord.substr(0, j))
//             {
//                 a.push_back(s);
//                 k--;
//             }
//         }
//         ans.push_back(a);
//     }

//     return ans;
// }

vector<vector<string>> suggestedProducts(vector<string> &products, string searchWord)
{
    vector<vector<string>> res;
    sort(products.begin(), products.end());

    int i, j, mid, low, high;
    for (i = 0; i < searchWord.size(); i++)
    {
        string s = searchWord.substr(0, i + 1);
        low = 0;
        high = products.size();

        while (low < high)
        {
            mid = low + (high - low) / 2;
            if (products[mid] >= s)
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }

        vector<string> temp;
        for (j = low; j < low + 3 && j < products.size(); j++)
        {
            if (products[j].find(s) == 0)
            {
                temp.push_back(products[j]);
            }
            else
            {
                break;
            }
        }
        res.push_back(temp);
    }
    return res;
}

int main()
{
    vector<string> products = {"mobile", "mouse", "moneypot", "monitor", "mousepad"};
    string searchWord = "mouse";

    vector<vector<string>> ans = suggestedProducts(products, searchWord);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    // cout<<searchWord.substr(0,1);
}

// You are given an array of strings products and a string searchWord.

// Design a system that suggests at most three product names from products
//  after each character of searchWord is typed. Suggested products should have
//  common prefix with searchWord. If there are more than three products with a
//  common prefix return the three lexicographically minimums products.

// Return a list of lists of the suggested products after each character of searchWord is typed.

// Example 1:
// Input: products = ["mobile","mouse","moneypot","monitor","mousepad"], searchWord = "mouse"
// Output: [["mobile","moneypot","monitor"],["mobile","moneypot","monitor"],["mouse","mousepad"],
// ["mouse","mousepad"],["mouse","mousepad"]]

// Explanation: products sorted lexicographically = ["mobile","moneypot","monitor","mouse","mousepad"].
// After typing m and mo all products match and we show user ["mobile","moneypot","monitor"].
// After typing mou, mous and mouse the system suggests ["mouse","mousepad"].

// Example 2:
// Input: products = ["havana"], searchWord = "havana"
// Output: [["havana"],["havana"],["havana"],["havana"],["havana"],["havana"]]
// Explanation: The only word "havana" will be always suggested while typing the search word.
