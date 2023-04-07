// 88. Merge Sorted Array

// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
// Merge nums1 and nums2 into a single array sorted in non-decreasing order.
// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

// Example 1:

// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]
// Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.


#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

 void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while(i>=0 && j>=0){
            if(arr1[i] > arr2[j]){
                arr1[k] = arr1[i];
                i--; k--;
            }
            else{
                arr1[k] = arr2[j];
                j--; k--;
            }
        }
        while(j>=0){
            arr1[k] = arr2[j];
            j--; k--;
        }
        
    }

int main(){
    vector<int>arr1 = {1,2,3,0,0,0};
    vector<int>arr2 = {2,5,6};
    
    int m = sizeof(arr1)/ sizeof(arr1[0]);
    int n = sizeof(arr2)/ sizeof(arr2[0]);

    merge(arr1,m,arr2,n);
    for (int k = 0; k < m+n; k++)
    {
        cout << arr1[k] << " ";
    }
  
    return 0;   
}