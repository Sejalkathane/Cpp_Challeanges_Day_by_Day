#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr, int low, int mid, int high)
{
    int i = low;
    int j = mid+1;
    vector<int> temp;

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= high)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }
}

void merge_sort_algo(vector<int> &arr, int low, int high)
{
    // condition only one -one element remain
    if (low == high)
        return;
    int mid = (low + high) / 2;
   
    // recursive call help to devide tilll all  single element not get
    // run from low to mid
    merge_sort_algo(arr, low, mid);
    // mid to high
    merge_sort_algo(arr, mid + 1, high);

    // merge this all divided array::
    merge(arr, low, mid, high);
}

int main()
{
    vector<int> arr = {4, 3, 1, 6, 8, 5, 9};
    int n = arr.size();

    merge_sort_algo(arr, 0, n - 1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}