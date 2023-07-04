#include <bits/stdc++.h>
using namespace std;

// void rev(vector<int>& v, int n, int low, int high)
// {

//     if (low >= high)
//         {return;}

//     swap(v[low], v[high]);
//     rev(v,n,low+1,high-1);
// }

bool pali(string s, int n, int low, int high)
{

    if (s[low] != s[high])
    {
        return false;
    }
    if (low = high)
        return true;

    if (low < high + 1)
    {
        return pali(s, n, low + 1, high - 1);
    }
}

int main()
{
    // vector<int> v = {1, 2, 3, 4, 5, 6};
    // int n = v.size();
    // int low = 0;
    // int high = n - 1;
    // rev(v, n, low, high);

    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    // palindrome::
    string s = "ABwCCBA";
    int n = s.size();
    int low = 0;
    int high = n - 1;

    cout << pali(s, n, low, high);
}