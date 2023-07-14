#include <bits/stdc++.h>
using namespace std;

// Input: hand = [1,2,3,6,2,3,4,7,8], groupSize = 3
// Output: true
// Explanation: Alice's hand can be rearranged as [1,2,3],[2,3,4],[6,7,8]

// Input: hand = [1,2,3,4,5], groupSize = 4
// Output: false

int main()
{
    vector<int> v = {1, 2, 3, 6, 2, 3, 4, 7, 8};
    int k = 3;

    // vector<int> v = {1,2,3,4,5};
    // int k = 4;

    int n = v.size();
    if (n % k != 0)
    {
        cout << "false";
        return 0;
    }

    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[v[i]]++;
    }

    while(mp.size()!=0)
    {
        int cur=mp.begin()->first;

        for(int i=0;i<k;i++)
        {
            if(mp[cur+i]==0)
             {
                cout<<"false";
                return 0;
             }
            
            else if(--mp[cur+i]<1)
            {
                mp.erase(cur+i);
            }
        }
    }
    cout<<"true";
}