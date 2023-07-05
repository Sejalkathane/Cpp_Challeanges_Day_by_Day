#include <bits/stdc++.h>
using namespace std;

// same as subseq2 but hear we need to prin tonly one subseq

int SumSubSeq(int index, int s, int sum, vector<int> &arr, int n)
{
    if (index == n)
    {
        if (s == sum)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    s += arr[index];

    // condition for take
    int l = SumSubSeq(index + 1, s, sum, arr, n);

    s -= arr[index];

    // condition for not take
    int r = SumSubSeq(index + 1, s, sum, arr, n);
    
    //pick up condition + not pick condition;
    return l + r;
}

int main()
{
    vector<int> arr = {1, 2, 1};
    int n = arr.size();
    int sum = 2;

    cout<<sum;              
    // cout << SumSubSeq(0, 0, sum, arr, n);
    return 0;
}

