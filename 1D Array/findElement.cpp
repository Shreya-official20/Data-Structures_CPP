//find an element in the array(arr, num)
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int findElement(vector<int> &arr, int num){
    for(int i=0;i<arr.size();i++){
        if(arr[i] == num){
            return i; // returning index here
        }
    }
    return -1; // element is not present in the array
}

int main(){
    
    vector<int>arr = {1,2,3,4,5,6,7};

    // for(int i=0;i<arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }
    

    cout<<findElement(arr, 5);
}