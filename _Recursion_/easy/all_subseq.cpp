#include <bits/stdc++.h>
using namespace std;

// void subseq(vector<int> v, vector<int> &ans, int index)
// {
//     if (index == v.size())
//     {
//         for (auto a : ans)
//             cout << a<<" ";
//         if (ans.size() == 0)
//             cout << "{}";
//         cout << endl;
//         return;
//     }

//     ans.push_back(v[index]);
//     subseq(v, ans, index + 1);
//     ans.pop_back();
//     subseq(v, ans, index +1);
// }

// void subseq_sum(vector<int> v, vector<int> &ans, int index, int sum, int target)
// {
//     if (index == v.size())
//     {
//         if (sum == target)
//         {
//             for (auto a : ans)
//                 cout << a << " ";
//             cout << endl;
//         }

//         return;
//     }

//     ans.push_back(v[index]);
//     sum += v[index];
//     subseq_sum(v, ans, index + 1, sum, target);
//     ans.pop_back();
//     sum -= v[index];
//     subseq_sum(v, ans, index + 1, sum, target);
// }

// subset sum :::

// void subseq(vector<int> v, vector<int> &ans, int index)
// {
//     if (index == v.size())
//     {
//         int sum = 0;
//         for (auto a : ans)
//         {
//             sum += a;
//             cout << a << " ";
//         }
//         if (ans.size() == 0)
//         {
//             cout << "{}  ";
//         }
//         cout << "   || sum: " << sum;
//         cout << endl;
//         return;
//     }

//     ans.push_back(v[index]);
//     subseq(v, ans, index + 1);
//     ans.pop_back();
//     subseq(v, ans, index + 1);
// }

int main()
{
    //[1,2,3]  => print all subsequence

    vector<int> v = {1, 2, 1};
    int index = 0;
    vector<int> ans;
    // subseq(v, ans, index);

    int target = 2;
    // subseq_sum(v, ans, index, 0, target);

    // subset sum:
    // subseq(v, ans, index);
    return 0;
}