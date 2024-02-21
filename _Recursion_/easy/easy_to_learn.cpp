#include <bits/stdc++.h>
using namespace std;

// void one_to_n(int n)
// {
//     if(n==0) return ;

//     cout<<n<<endl;
//     rec(n-1);
//     cout<<n<<endl;
// }

// void n_to_one(int n)
// {
//     if(n==0) return ;

//     cout<<n<<endl;
//     rec(n-1);
//     cout<<n<<endl;
// }

// void sum(int n, int s)
// {
//     if (n == 0)
//         cout << s;
//     s += n;

//     sum(n - 1, s);
// }

// void dec_to_bin(int n, string ans)
// {
//     if (n == 1)
//     {
//         if (n % 2 != 0)
//             ans += '1';
//         reverse(ans.begin(), ans.end());
//         cout << ans;
//     }

//     if (n % 2 == 0)
//         ans += '0';
//     else
//         ans += '1';
//     dec_to_bin(n / 2, ans);
// }

// void sum_of_array(vector<int> &v, int &sum, int n)
// {

//     sum = sum + v[n];

//     if (n == 0)
//     {
//         cout << sum << endl;
//     }
//     sum_of_array(v, sum, n - 1);
// }

// void rev(string s, int i, int n)
// {
//     // Sejal

//     // cout<<s;
//     if (i == 3)
//         cout << s;
//     swap(s[i], s[n]);
//     rev(s, i += 1, n -= 1);
// }

void find(vector<int> v, int n, int maxi, int mini)
{
    if (v[n] > maxi)
        maxi = v[n];
    if (v[n] < mini)
        mini = v[n];
    if (n == 0)
        cout << maxi << " " << mini;

    find(v, n - 1, maxi, mini);
}

int main()
{
    // int n = 16;

    // 1 2 3 4 5
    // one_to_n(n);
    // n_to_one(n);

    // int s = 0;
    // sum(n, s);

    //    7 -> 111

    // string ans = "";
    // dec_to_bin(n, ans);

    // sum of array:
    // vector<int> v = {1, 2, 3, 4, 5};
    // int sum = 0;
    // int n = v.size() - 1;

    // sum_of_array(v, sum, n);

    // Reverse of string
    // string s = "Sejal";
    // int i = 0;
    // int n = s.size() - 1;
    // rev(s, i, n);

    // find min, max;

    vector<int> v = {3, 1, 5, 2, 5, 7};
    int n = v.size() - 1;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    find(v, n, maxi, mini);

    return 0;
}