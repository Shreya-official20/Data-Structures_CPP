// 1480. Running Sum of 1d Array

// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
// Return the running sum of nums.

// Example 1:

// Input: nums = [1,2,3,4]
// Output: [1,3,6,10]
// Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> runningSum(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        ans[i] = sum;
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    vector<int> ans = runningSum(arr);

    for(int i=0;i<ans.size(); i++){
        cout<<ans[i]<<" ";
    } 
    return 0;  
}