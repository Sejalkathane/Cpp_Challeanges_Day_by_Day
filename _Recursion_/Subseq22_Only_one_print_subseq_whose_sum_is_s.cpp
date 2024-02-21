#include <bits/stdc++.h>
using namespace std;

// same as subseq2 but hear we need to prin tonly one subseq

bool SumSubSeq(int index, vector<int> &ds, int s, int sum, vector<int> &arr, int n)
{
    if (index == n)
    {
        if (s == sum)
        {
            for (auto i : ds)
            {
                cout << i << " ";
            }
            cout << endl;
            return true;
        }
        else
           { return false;}
    }

    ds.push_back(arr[index]);
    s += arr[index];

    // condition for take
    if (SumSubSeq(index + 1, ds, s, sum, arr, n) == true)
    {
        return true;
    }

    s -= arr[index];
    ds.pop_back();

    // condition for not take
    if (SumSubSeq(index + 1, ds, s, sum, arr, n) == true)
    {
        return true;
    }

    return false;
}

int main()
{
    vector<int> arr = {1, 2, 1};
    int n = arr.size();

    vector<int> ds;
    int sum = 2;

    SumSubSeq(0, ds, 0, sum, arr, n);
}