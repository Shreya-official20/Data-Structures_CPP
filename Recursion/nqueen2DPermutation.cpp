#include <iostream>
#include <vector>
using namespace std;

int queen2DPermutation(vector<vector<bool>> &board, int qpsf, int tnq, string ans){
    if(qpsf == tnq){
        cout<<ans<<endl;
        return 1;
    }

    int count = 0;
    for(int i=0; i<board.size()*board[0].size(); i++){
        int row = i/board[0].size();
        int col = i%board[0].size();

        if(!board[row][col]){
           board[row][col] = true; 
           count+=queen2DPermutation(board, qpsf+1, tnq, ans + "(" + to_string(row) + "," + to_string(col) + ")");
           board[row][col] = false;
        }
    }
    return count;
}

int main(){
    vector<vector<bool>>board(4, vector<bool>(4, false));
    cout<<queen2DPermutation(board, 0, 4, "")<<endl;

    return 0;
}