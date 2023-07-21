#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    sort(arr,arr+n);
	    stack<int>s;

        vector<int>v;
         
         int sum=0;
        for(int i=n-1;i>=0;i--)
        {
            sum+=arr[i];
            s.push(sum);
        }

        while(!s.empty())
        {
           v.push_back(s.top());
           s.pop();
        }
        
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}
