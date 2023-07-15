#include <bits/stdc++.h>
using namespace std;

int garbageCollection(vector<string> &garbage, vector<int> &travel)
{
    int n = garbage.size();

    // prefix sum store;
    vector<int> v(n);
    v.push_back(0); // first 0 then 2 6 9 [0,2,6,9]
    int j = 1;
    for (int i = 0; i < travel.size(); i++)
    {
        v[j] = v[i] + travel[i];
        j++;
    }

    int count = 0;
    int listm = 0, listp = 0, listg = 0;
    for (int i = 0; i < garbage.size(); i++)
    {
        for (auto a : garbage[i])
        {
            count++;
            if (a == 'M')
                listm = i;
            if (a == 'G')
                listg = i;
            if (a == 'P')
                listp = i;
        }
    }
    int ans = count + v[listm] + v[listg] + v[listp];
    return ans;
}

int main()
{
    vector<string>garbage = {"G","P","GP","GG"};
    vector<int>travel = {2,4,3};

    // vector<string> garbage = {"MMM", "PGM", "GP"};
    // vector<int> travel = {3, 10};

    cout << garbageCollection(garbage, travel);
}