#include<bits/stdc++.h>
using namespace std;

int main()
{
    //same as 904;
     string s="abaccab";

    int n = s.size();
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
        mp[s[j]]++;
        if (mp.size() <= k)
        {
            mx = max(mx, (j - i + 1));
        }
        else if (mp.size() > k)
        {
            while (mp.size() > k)
            {
                mp[s[i]]--;
                if (mp[s[i]] == 0)
                {
                    mp.erase(s[i]);
                }
                i++;
            }
        }
        j++;
    }
    if(a==false){
   cout<<mx;}
    return 0;
}