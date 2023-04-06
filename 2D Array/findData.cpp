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
int findData(vector<vector<int>> &arr, int num)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            if (arr[i][j] == num)
               return 1;
        }
    }
    return -1;
}
// Driver Code
int main()
{
    int m = 2;
    int n = 3;
    int num = 4;
    vector<vector<int>> arr = {
        {1,2,3}, {4,5,6}
    };
   
    cout << " Searched Element: " << findData(arr, num);
    return 0;
}