#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeSimilarItems(vector<vector<int>> &items1, vector<vector<int>> &items2, vector<vector<int>> &v)
{
    for (auto a : items2)
    {
        items1.push_back(a);
    }

    sort(items1.begin(), items1.end());

    vector<int> temp = items1[0];
    int i = 0;
    for (auto a : items1)
    {
        if (i == 0)
        {
            i++;
            continue;
        }
        if (a[0] == temp[0])
        {
            temp[1] = a[1] + temp[1];
        }
        else
        {
            v.push_back(temp);
            temp = a;
        }
    }
    v.push_back(temp);
    return v;
}

int main()
{
    vector<vector<int>> item1 = {{1, 1}, {4, 5}, {3, 8}};
    vector<vector<int>> item2 = {{3, 1}, {1, 5}};

    vector<vector<int>> v;
    mergeSimilarItems(item1, item2, v);

    for (auto i : v)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}