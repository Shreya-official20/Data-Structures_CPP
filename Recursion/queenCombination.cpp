#include <iostream>
using namespace std;

int queenCombination(int box, int idx, int qpsf, int tnq, string ans){
    if(qpsf == tnq){
        cout<<ans<<endl;
        return 1;
    }

    int count = 0;
    for(int i=idx; i<box; i++){
        count+=queenCombination(box, i+1, qpsf+1, tnq, ans + "b" + to_string(i) + "q" + to_string(qpsf));
    }
    return count;
}

int main(){
    cout<<queenCombination(5, 0, 0, 3, "")<<endl;

    return 0;
}