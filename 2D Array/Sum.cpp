// sum of 2D Array

#include<iostream>
#include<vector>
using namespace std;

void input(vector<vector<int>> &arr, int Row, int Col)
{
    // input
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

int sum2d(vector<vector<int>> &arr){
  int sum=0;
  for(int i=0; i<arr.size(); i++){
    for(int j=0; j<arr[0].size(); j++){
        sum = sum+arr[i][j];
    }
  }
  return sum;
}

int main{
    int Row = 3;
    
    int Col = 4;
    

    vector<vector<int>> arr(Row, vector<int>(Col, 0));
    input(arr, Row, Col);
    sum2d(arr);
    return 0;
}