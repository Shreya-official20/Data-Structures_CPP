#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void printWave(vector<vector<int>> &arr)
{
    for (int j = 0; j < arr.size(); j++) {
        // even top-bottom
        if (j % 2 == 0) {
            for (int i = 0; i < arr[0].size(); i++) {
                cout<<arr[i][j]<<" ";
            }
        }
        // odd bottom-top
        else {
            for (int i = arr.size() - 1; i >= 0; i--) {
                  cout<<arr[i][j]<<" ";
            }
        }
    }
}

int main()
{
    int m = 5;
    int n = 4;
  vector<vector<int>> arr ={{  1,  6, 11, 16},
                    {  2,  7, 12, 17},
                    {  3,  8, 13, 18},
                    {  4,  9, 14, 19},
                    {  5, 10, 15, 20}};
  
  printWave(arr);
  return 0;
}