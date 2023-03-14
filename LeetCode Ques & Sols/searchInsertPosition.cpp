// 35. Search Insert Position

// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
// You must write an algorithm with O(log n) runtime complexity.

// Example 1:

// Input: nums = [1,3,5,6], target = 5
// Output: 2

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int searchInsert(vector<int>& arr, int target) {
        int si = 0;
        int ei = arr.size()-1;
        int n= arr.size();
        if(target<=arr[0]){
            return 0;
        }
        if(target>arr[n-1]){
            return n;
        }
        while(si<ei){
            int mid = (si+ei)/2;
            if(arr[mid] < target){
                si = mid+1;
            } else {
                ei = mid;
            }
        }
        return ei;
    }

    int main()
{
    vector<int> arr = {1,3,5,6};
    int target = 5;
    searchInsert(arr, 5);

   
}