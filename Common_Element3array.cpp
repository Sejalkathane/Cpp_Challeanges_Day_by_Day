#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A = {1, 5, 10, 20, 40, 80};
    vector<int> B = {6, 7, 20, 80, 100};
    vector<int> C = {3, 4, 15, 20, 30, 70, 80, 120};

    int n1 = A.size();
    int n2 = B.size();
    int n3 = C.size();

    set<int> s;
    vector<int> ans;

    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            s.insert(A[i]);
            i++;
            j++;
            k++;
        }
        else
        {
            int c = min(A[i], min(B[j], C[k]));
            if (c == A[i])
            {
                i++;
            }
            else if (c == B[j])
            {
                j++;
            }
            else
            {
                k++;
            }
        }
    }

    for (int a : s)
    {
        ans.push_back(a);
    }

    for (int a : ans)
    {
        cout << a << " ";
    }

    return 0;
}