#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {4, 3, 1, 1, 3, 3, 2};
    int n = v.size();
    int k = 3;

    map<int, int> mp;
    for (auto a : v)
    {
        mp[a]++;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for (auto a : mp)
    {
        pq.push({a.second, a.first});
    }

    while (k)
    {
        int a = pq.top().first;
        if (k >= a)
        {
            pq.pop();
            k = k - a;
        }
        else
        {
            k = 0;
        }
    }

    cout << pq.size();
}

