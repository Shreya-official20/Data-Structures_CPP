#include <iostream>
#include <vector>
using namespace std;

int queenPermutation(vector<bool> &box, int qpsf, int tnq, string ans){
    if(qpsf == tnq){
        cout<<ans<<endl;
        return 1;
    }

    int count = 0;
    for(int i=0; i<box.size(); i++){
        if(!box[i]){
            box[i] = true;
             count+=queenPermutation(box, qpsf+1, tnq, ans + "b" + to_string(i) + "q" + to_string(qpsf));
             box[i]=false;
        }
    }
    return count;
}

int main(){
    vector<bool>box(5, false);
    cout<<queenPermutation(box, 0, 3, "")<<endl;

    return 0;
}