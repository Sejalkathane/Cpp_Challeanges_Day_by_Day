#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>t={1,2,3,2,2};

    int n = t.size();
    unordered_map<int, int> mp;
    int i = 0;
    int j = 0;
    int k = 2;
    int mx = 0;

    bool a=false;
    if (n == 1)
    {
        cout<<1;
        a=true;
    }
    else if (n == 2)
    {
        cout<<3;
        a=true;
    }

    while (j < n)
    {
        mp[t[j]]++;
        if (mp.size() <= k)
        {
            mx = max(mx, (j - i + 1));
        }
        else if (mp.size() > k)
        {
            while (mp.size() > k)
            {
                mp[t[i]]--;
                if (mp[t[i]] == 0)
                {
                    mp.erase(t[i]);
                }
                i++;
            }
        }
        j++;
    }
    if(a==false){
   cout<<mx;}
  
}