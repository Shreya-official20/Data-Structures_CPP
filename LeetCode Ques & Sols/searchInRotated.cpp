// 33. Search in Rotated Sorted Array

// There is an integer array nums sorted in ascending order (with distinct values).
// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) 
// such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity. 

// Example 1:

// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int search(vector<int>& nums, int target) {
        int size=nums.size();
       int si=0,ei=size-1,mid=0;
        while(si<=ei){
                mid = si+(ei-si)/2;
                if(nums[mid]==target) {
                    return mid;
                }
                if(nums[mid]>=nums[si]){
                if(nums[mid]>=target && nums[si]<=target){
                ei=mid-1;
                }
                else {si=mid+1;}
                }
                else{
                    if(nums[mid]<=target && nums[ei]>=target) {
                        si=mid+1;}
                    else {ei=mid-1;}
                }
        }
        return -1;
        

        
    }

int main()
{
    vector<int> arr = {1,3,5,6};
    int target = 5;
    searchInsert(arr, 5);

   
}