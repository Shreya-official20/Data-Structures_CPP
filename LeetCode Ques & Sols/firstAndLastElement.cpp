// 34. Find First and Last Position of Element in Sorted Array

// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
// If target is not found in the array, return [-1, -1].
// You must write an algorithm with O(log n) runtime complexity.

// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

 int firstIndex(vector<int> &arr, int data){
        int si = 0;
        int ei = arr.size()-1;

        while(si <= ei){
            int mid = (si+ei)/2;
            if(arr[mid] == data){
                if(mid-1>=0 && arr[mid-1] == data){
                    ei = mid-1;
                } else{
                    return mid;
                }
            } else if(arr[mid] > data){
                ei = mid - 1;
            } else {
                si = mid+1;
            }
        }
        return -1;
    }

    int lastIndex(vector<int> &arr, int data){
        int si = 0, ei = arr.size()-1;
        while(si<=ei){
            int mid = (si+ei)/2;
            if(arr[mid] == data){
                if(mid+1 < arr.size() && arr[mid+1] == data){
                    si=mid+1;
                } else {
                    return mid;
                }
            } else if(arr[mid] > data){
                ei = mid-1;
            } else {
                si = mid+1;
            }
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2);
        ans[0] = firstIndex(nums, target);
        ans[1] = lastIndex(nums, target);

        return ans;
    }

    int main(){
    vector<int>nums = {5,7,7,8,8,10};
    int k = 8;
    searchRange(nums, 8);
 
}
