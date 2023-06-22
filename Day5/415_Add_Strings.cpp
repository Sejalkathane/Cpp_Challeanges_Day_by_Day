#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a="113345767";
    string b="1237888";

    int i=a.length()-1;
    int j=b.length()-1;
    
    string ans="";
    int carry=0;

    while(i>=0 || j>=0 ||carry)
    {
        int sum=0;
        if(i>=0)
        {
            sum+=(a[i]-'0');
            i--;
        }

        if(j>=0)
        {
            sum+=(b[j]-'0');
            j--;
        }

        sum+=carry;
        carry=sum/10;
        sum=sum%10;
        ans=ans+ to_string(sum);
    }
    reverse(ans.begin(),ans.end());

   cout<<ans;



    return 0;
}