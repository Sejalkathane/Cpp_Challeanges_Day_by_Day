#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr, int low, int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int d = 3;
    int n = arr.size();

    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}