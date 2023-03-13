// 75. Sort Colors

// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent,
// with the colors in the order red, white, and blue.
// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
// You must solve this problem without using the library's sort function.

// Example 1:

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void swap(vector<int> &arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    return;
}

void sortColors(vector<int> &arr)
{
    if (arr.size() == 0)
    {
        return;
    }
    int n = arr.size();
    int p1 = -1;
    int idx = 0;
    int p2 = n - 1;

    while (idx <= p2)
    {
        if (arr[idx] == 0)
        {
            p1++;
            swap(arr, idx, p1);
            idx++;
        }
        else if (arr[idx] == 2)
        {
            swap(arr, idx, p2);
            p2--;
        }
        else
        {
            idx++;
        }
    }
}

int main()
{
    vector<int> arr = {2,0,2,1,1,0};
    
    sortColors(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}