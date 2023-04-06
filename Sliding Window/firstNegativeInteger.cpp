// ******************GFG***************

// First negative integer in every window of size k
// Given an array A[] of size N and a positive integer K, find the first negative integer for each and every window(contiguous subarray) of size K.

// Example 1:

// Input :
// N = 5
// A[] = {-8, 2, 3, -6, 10}
// K = 2
// Output :
// -8 0 -6 -6
// Explanation :
// First negative integer for each window of size k
// {-8, 2} = -8
// {2, 3} = 0 (does not contain a negative integer)
// {3, -6} = -6
// {-6, 10} = -6

vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int N, long long int K)
{
    int start = 0;
    int end = 0;
    list<int> l;

    vector<long long> ans;

    while (end < N)
    {
        if (A[end] < 0)
        {
            l.push_back(A[end]);
        }
        if ((end - start + 1) < K)
        {
            end++;
        }
        else if ((end - start + 1) == K)
        {
            if (l.size() == 0)
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(l.front());
                if (A[start] == l.front())
                {
                    l.pop_front();
                }
            }
            start++;
            end++;
        }
    }
    return ans;
}