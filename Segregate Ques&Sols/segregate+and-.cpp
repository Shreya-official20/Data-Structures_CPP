//segregate +ve and -ve numbers in an array
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

void segregatePositiveAndNegative(vector<int> &arr){
    if(arr.size() == 0){
        return;
    }

    int p = -1;
    int idx = 0;
    int n = arr.size();

    while(idx < n){
        //  if(arr[idx] < 0)              //this will print negative and then positive 
        if(arr[idx] >= 0){           //this will print positive and then negative
            p++;
            swap(arr, p, idx);
        }
        idx++;
    }
    return;
}

int main(){
    vector<int>arr = {1, -1, 3, 2, -7, -5, 11, 6};
    
    segregatePositiveAndNegative(arr);
    for(int i=0;i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    
}