#include <iostream>
#include <vector>
using namespace std;

int queen2DCombination(vector<vector<bool>> &board, int idx, int qpsf, int tnq, string ans){
    if(qpsf == tnq){
        cout<<ans<<endl;
        return 1;
    }

    int count = 0;
    for(int i=idx; i<board.size()*board[0].size(); i++){
        int row = i/board[0].size();
        int col = i%board[0].size();
        count+=queen2DCombination(board, i+1, qpsf+1, tnq, ans + "(" + to_string(row) + "," + to_string(col) + ")");
    }
    return count;
}

int main(){
    vector<vector<bool>>board(4, vector<bool>(4, false));
    cout<<queen2DCombination(board, 0, 0, 4, "")<<endl;

    return 0;
}