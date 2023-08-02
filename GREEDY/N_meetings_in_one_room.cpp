#include <bits/stdc++.h>
using namespace std;


//same as activity selection:

// Input:
// N = 6
// start[] = {1,3,0,5,8,5}
// end[] =  {2,4,6,7,9,9}
// Output:
// 4
// Explanation:
// Maximum four meetings can be held with
// given start and end timings.
// The meetings are - (1, 2),(3, 4), (5,7) and (8,9)

static bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second < b.second;
}
int maxMeetings(int start[], int end[], int n)
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
    int n=3;
   int start[n]={10,12,20};
   int end[n]={20,25,30};
    cout<<maxMeetings(start,end,n);
}