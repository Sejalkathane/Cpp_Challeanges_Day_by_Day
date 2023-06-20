#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=3;
     if(n==1)
        {
            return 0;
        }

        vector<int>v;
        for(int i=1;i<=n;i++)
        {
          v.push_back((2*i)+1);
        }
        int low=0;
        int high=v.size()-1;
        int sum=0;

        while(low<high)
        {
            sum=sum+abs(v[low]-v[high])/2;
            low++;
            high--;

        }
        cout<< sum;
    return 0;
}