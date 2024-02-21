#include <iostream>
#include <vector>

using namespace std;

//m
bool sub(vector<int> &v, int n, int sum, int index, vector<vector<int>> &dp)
{
    if (sum == 0)
        return true;

    if (index == n)
        return false;

    if (dp[index][sum] != -1)
        return dp[index][sum];

    return dp[index][sum] = sub(v, n, sum - v[index], index + 1, dp) || sub(v, n, sum, index + 1, dp);
}

int main()
{
    vector<int> v = {1, 2, 3, 7, 8, 10};
    int target = 181;
    int n = v.size();
    vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));

    cout << sub(v, n, target, 0, dp);

    return 0;
}
