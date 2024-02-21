#include<bits/stdc++.h>
using namespace std;

//TC: log(base 2)n

// lower Bound:: smallest index ,greater than equal to target
//short:
//  auto it = lower_bound(v.begin(), v.end(), target);

//     if (it != v.end()) {
//         cout << "The lower bound of " << target << " is at index " << distance(v.begin(), it) << std::endl;
//     }



int lowerBound(vector<int>v,int target)
{
    int n=v.size();
    int low=0,high=n-1;
    int ans=n;

    while (low<=high)
    {
        int mid=(low+high)/2;

        if(v[mid]>=target)
        {
            ans=mid;
            high=mid-1;
        }
        else 
        {
            low=mid+1;
        }
    }
    return ans;
}

int main()
{
   vector<int> v = {1, 2, 4, 4, 5, 7, 9};

    int target = 4;
    int index = lowerBound(v, target);
    cout<<index;
}