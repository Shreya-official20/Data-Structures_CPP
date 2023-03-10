// reverse araay

#include<iostream>
#include<vector>
using namespace std;

void swap(vector<int> &arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    return;
}
void reverse(vector<int> &arr, int start, int end){
    while(start < end){
        swap(arr,start,end);
        start++;
        end--;
    }

}

int main(){
     vector<int>arr = {1,2,3,4};

    //  swap(myArr, 0, myArr.size()-1);
    reverse(arr, 0, arr.size()-1);

    for(int i=0;i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}