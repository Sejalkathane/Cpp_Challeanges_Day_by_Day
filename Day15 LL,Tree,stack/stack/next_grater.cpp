#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {5, 15, 10, 8, 6, 12, 9, 18};
    int n = v.size();

    vector<int> ans;
    stack<int> st;

    for (int i = n - 1; i >= 0; i--)
    {
        while (st.empty()==false && st.top() <= v[i])
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
    reverse(ans.begin(),ans.end());

    for(int i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}