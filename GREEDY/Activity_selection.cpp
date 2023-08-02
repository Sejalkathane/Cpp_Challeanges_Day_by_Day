#include <bits/stdc++.h>
using namespace std;

// same as meeting in a room:

static bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second < b.second;
}
int activitySelection(int start[], int end[], int n)
{
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(start[i], end[i]));
    }

    sort(v.begin(), v.end(), cmp);
    int j = 0;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[j].second < v[i].first)
        {
            j = i;
            count++;
        }
    }

    return count;
}

int main()
{
    int n = 4;
    int start[n] = {1, 3, 2, 5};
    int end[n] = {2, 4, 3, 6};
    cout << activitySelection(start, end, n);
}