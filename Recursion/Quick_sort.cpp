#include <bits/stdc++.h>
using namespace std;

int partition_(vector<int>&arr,int low,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    //run till i exceed j
    while(i<j)
    {
        //if i is greater than pivot and less than high then ++ else break;
        while(arr[i]<=pivot && i<=high-1)
        {
            i++;
        }
        //if j is less than pivot and greater than low then -- else break;
        while(arr[j]>pivot && j>=low+1)
        {
            j--;
        }

        // swapt that point where i >pivot and j<pivot 
        if(i<j) swap(arr[i],arr[j]);   //our moto is make pivot front element smaller than pivot and back element less than pivot
    }
    //swap pivot with that less element
    swap(arr[low],arr[j]);
    return j;

}

void quick_sort_algo(vector<int>&arr,int low,int high)
{
    if(low<high)
    {
        //place pivot at there correct position 
        int pivot_index= partition_(arr,low,high);

        //simply do this recursively till you get all sort
        quick_sort_algo(arr,low,pivot_index-1);
        quick_sort_algo(arr,pivot_index+1,high);

    }

}

int main()
{
    vector<int> arr = {4, 3, 1, 6, 8, 5, 9};
    int n = arr.size();

    quick_sort_algo(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}