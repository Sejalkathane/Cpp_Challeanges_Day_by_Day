#include<bits/stdc++.h>
using namespace std;


 int subarrayCountWithAtMostKchar(vector<int>& arr, int k) {
        int i = 0, j = 0, count = 0;
        unordered_map<int, int> mp; // create an unordered map to keep track of the count of each integer

        while (j < arr.size()) {
            mp[arr[j]]++; // increment the count of integer arr[j] in the map

            if (mp.size() <= k) { // if the number of distinct integers in the map is less than or equal to k
                count += j - i + 1; // then update the count with the number of subarrays that can be formed with this window
                j++; // move the right pointer forward
            } else {
                while (mp.size() > k) { // if the number of distinct integers in the map is greater than k
                    mp[arr[i]]--; // decrement the count of the integer arr[i] in the map

                    if (mp[arr[i]] == 0) { // if the count becomes 0
                        mp.erase(arr[i]); // then remove the integer from the map
                    }

                    i++; // move the left pointer forward
                }

                if (mp.size() <= k) { // after shrinking the window, if the number of distinct integers in the map is less than or equal to k
                    count += j - i + 1; // then update the count with the number of subarrays that can be formed with this window
                }

                j++; // move the right pointer forward
            }
        }

        return count; // return the count
    }

int main()
{
    vector<int>nums={1,2,1,2,3};
    int k=2;
    int a = subarrayCountWithAtMostKchar(nums, k); // get the count of subarrays with at most k distinct integers
        int b = subarrayCountWithAtMostKchar(nums, k - 1); // get the count of subarrays with at most k-1 distinct integers

        cout<< a - b; // the difference between these counts gives the count of subarrays with exactly k distinct integers
}