#include <bits/stdc++.h>
using namespace std;

// Input: s = "abc", shifts = [[0,1,0],[1,2,1],[0,2,1]]
// Output: "ace"
// Explanation: Firstly, shift the characters from index 0 to index 1 backward. Now s = "zac".
// Secondly, shift the characters from index 1 to index 2 forward. Now s = "zbd".
// Finally, shift the characters from index 0 to index 2 forward. Now s = "ace".

int main()
{
    string s = "abc";
    vector<vector<int>> shifts = {{0, 1, 0}, {1, 2, 1}, {0, 2, 1}};

    // naive:: O(n)^2
    for (int i = 0; i < shifts.size(); i++)
    {
        int l = shifts[i][0];
        int r = shifts[i][1];
        int dir = shifts[i][2];

        if (dir == 1)
        {
            for (int i = l; i <= r; i++)
            {
                if (s[i] == 'z')
                    s[i] = 'a';
                else
                    s[i] += 1;
            }
        }
        else
        {
            for (int i = l; i <= r; i++)
            {
                if (s[i] == 'a')
                    s[i] = 'z';
                else
                    s[i] -= 1;
            }
        }
    }

    cout << s;
}
