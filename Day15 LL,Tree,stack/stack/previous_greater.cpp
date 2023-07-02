#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {15, 10, 18, 12, 4, 6, 2, 8};
    int n = v.size();

    vector<int> ans;
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (st.empty() == false && st.top() <= v[i])
        {
            st.pop();
        }

        if (st.empty())
        {
            ans.push_back(-1);
        }
        else
        {
            ans.push_back(st.top());
        }
        st.push(v[i]);
    }

    for (int i : ans)
    {
        cout<<i<<" ";
    }

    return 0;
}