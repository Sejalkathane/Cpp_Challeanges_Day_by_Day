#include <bits/stdc++.h>
using namespace std;

void subseq(int index, vector<int> &ds, int arr[], int n)
{
    if (index == n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }

        if (ds.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }

    ds.push_back(arr[index]);

    // pick move one by one
    subseq(index + 1, ds, arr, n);
    ds.pop_back();
    

    // not pick condition  because we pop this not add into this
    subseq(index + 1, ds, arr, n);
}

int main()
{
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;

    subseq(0, ds, arr, n);

    return 0;
}