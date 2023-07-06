#include <bits/stdc++.h>
using namespace std;

// Input: arr = [1,2,3,10,4,2,3,5]
// Output: 3
// Explanation: The shortest subarray we can remove is [10,4,2] of length 3. The remaining elements after that will be [1,2,3,3,5] which are sorted.
// Another correct solution is to remove the subarray [3,10,4].

int main()
{

    vector<int> arr = {1, 2, 3, 10, 4, 2, 3, 5};

    int n = arr.size();
    int i = 0;
    int j = n - 1;

    // i point to 0
    while (i < n - 1 && arr[i] <= arr[i + 1])
    {
        i++;
    }
    if (i == n - 1)
        return 0;

    // j point to n-1
    while (j > 0 && arr[j] >= arr[j - 1])
    {
        j--;
    }
    if (j == 0)
        return n - 1;

    int result = min(n - i - 1, j);
    int a = 0, b = j;
    while (a <= i && b < n)
    {
        if (arr[b] >= arr[a])
        {
            result = min(result, b - a - 1);
            a++;
        }
        else
        {
            b++;
        }
    }

    cout << result;
}