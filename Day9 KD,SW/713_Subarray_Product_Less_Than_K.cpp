#include<bits/stdc++.h>
using namespace std;
// Companies
// Given an array of integers nums and an integer k, return the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than k.

// Example 1:
// Input: nums = [10,5,2,6], k = 100
// Output: 8
// Explanation: The 8 subarrays that have product less than 100 are:
// [10], [5], [2], [6], [10, 5], [5, 2], [2, 6], [5, 2, 6]
// Note that [10, 5, 2] is not included as the product of 100 is not strictly less than k

int main()
{
    vector<int>nums={10,5,2,6};
    int k=100;
    int n=nums.size();
    int i=0 ,j=0;
    int pro=1;
    int count=0;

//    all is not big logic main thing is maintain count
    while(j<n)
    {
        pro*=nums[j];

        while(i<=j && pro>=k)
        {
            //remove ith element from product
            pro/=nums[i];
            i++;
        }
        // main logic hear hoe to find count dry run once
        //one element give one subarray
        //two size ex.[10,5] => give two one is 5, 10 5 
        //its all depend on size 
        //thats why we write this condiditon
        count+=(j-i+1);
        j++;
    }
    cout<<count;


    
    return 0;
}