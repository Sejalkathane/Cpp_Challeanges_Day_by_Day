#include <bits/stdc++.h>
using namespace std;

// Input: arr = [1,2,3,5], k = 3
// Output: [2,5]
// Explanation: The fractions to be considered in sorted order are:
// 1/5, 1/3, 2/5, 1/2, 3/5, and 2/3.
// The third fraction is 2/5.
int main()
{
    vector<int> arr = {1, 2, 3, 5};
    int k = 3;
    int n = arr.size();

    // pair of fraction value and i,,j
    priority_queue<pair<double, pair<int, int>>> pq;
    vector<int> ans;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double a = arr[i] / arr[j] * 1.0;

            if (pq.size() == k)
            {
                if (pq.top().first > a)
                {
                    pq.pop();
                    pq.push({a, {arr[i], arr[j]}});
                }
            }
            else
            {
                pq.push({a, {arr[i], arr[j]}});
            }
        }
    }
    ans.push_back(pq.top().second.first);
    ans.push_back(pq.top().second.second);

    cout<<ans[0]<<" "<<ans[1];
}