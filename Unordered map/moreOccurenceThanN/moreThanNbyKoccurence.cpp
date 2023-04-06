// *******************GFG*****************
// Count More than n/k Occurences

// Given an array arr[] of size N and an element k. The task is to find all elements in array that appear more than n/k times.

// Example 1:

// Input:
// N = 8
// arr[] = {3,1,2,2,1,2,3,3}
// k = 4
// Output: 2
// Explanation: In the given array, 3 and
//  2 are the only elements that appears
// more than n/k times.

class Solution
{
public:
    // Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k)
    {
        unordered_map<int, int> mp;

        int count = 0;

        for (int i = 0; i < n; i++)
        {

            mp[arr[i]]++;
        }

        for (auto &a : mp)
        {

            int value = a.second;

            if (value > n / k)
            {

                count++;
            }
        }

        return count;
    }
};
