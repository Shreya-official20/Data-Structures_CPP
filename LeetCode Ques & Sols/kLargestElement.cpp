// 215. Kth Largest Element in an Array

// Given an integer array nums and an integer k, return the kth largest element in the array.
// Note that it is the kth largest element in the sorted order, not the kth distinct element.
// You must solve it in O(n) time complexity.

// Example 1:

// Input: nums = [3,2,1,5,6,4], k = 2
// Output: 5

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int findKthLargest(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end(), greater <>());
        for( auto i : arr)
        {
            cout << i << ' ';
        } 
        int ans = arr.at(k - 1);

        return ans;
    }

int main()
{
    vector<int> arr = {3,2,1,5,6,4};
    int k = 2;
    findKthLargest(arr, 2);

   
}