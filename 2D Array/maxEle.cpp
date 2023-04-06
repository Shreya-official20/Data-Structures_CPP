// print maximum no in arr
#include <iostream>
using namespace std;

vector<vector<int>> input(vector<vector<int>> &arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> res[i][j];
        }
    }
}
int largest(vector<vector<int>> &arr)
{
    int max = arr[0][0];

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
            return max;
        }
    }
}
// Driver Code
int main()
{
    int m = 4;
    int n = 4;
    vector<vector<int>> arr(m, vector<int>(n, 0));
    // int n = sizeof ( arr ) / sizeof (arr [ 0 ] ) ;
    cout << " Largest in given array is " << largest(arr, m, n);
    return 0;
}