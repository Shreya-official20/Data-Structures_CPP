// segregate 0's & 1's in an array
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void swap(vector<int> &arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    return;
}

void segregate0and1(vector<int> &arr){
    if(arr.size() == 0){
        return;
    }

    int p = -1;
    int idx = 0;
    int n = arr.size();

    while(idx < n){
        if(arr[idx] == 0){
            p++;
            swap(arr, p, idx);
        }
        idx++;
    }
    return;
}

int main(){
    vector<int>arr = {0,0,1,1,0,0,1,1,0,0,0};
    
    segregate0and1(arr);
    for(int i=0;i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    
}