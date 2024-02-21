#include <iostream>
#include <vector>

bool isMatch(const std::string& s, const std::string& p) {
    int m = s.length();
    int n = p.length();

    // Create a 2D DP array to store the matching results
    std::vector<std::vector<bool>> dp(m + 1, std::vector<bool>(n + 1, false));

    // Empty pattern matches empty string
    dp[0][0] = true;

    // Fill the first row of dp
    for (int j = 1; j <= n; j++) {
        if (p[j - 1] == '*') {
            dp[0][j] = dp[0][j - 1];
        }
    }

    // Fill the DP array using the given rules
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (p[j - 1] == '?' || s[i - 1] == p[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else if (p[j - 1] == '*') {
                dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
            }
        }
    }

    return dp[m][n];
}

int main() {
    std::string str = "aaa";
    std::string pattern = "***";

    if (isMatch(str, pattern)) {
        std::cout << "Match" << std::endl;
    } else {
        std::cout << "Does not match" << std::endl;
    }

    return 0;
}



#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    return 0;
}