// rotate array >> 189. Rotate Array :leetcode

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

void rotate(vector<int> &arr, int k){
    k = k % arr.size();

    int i = 0;
    int j = arr.size()-1;

    reverse(arr, i, j);
    reverse(arr, 0, k-1);
    reverse(arr, k, j);

}

int main(){
     vector<int>arr = {1,2,3,4, 5, 6, 7};

    rotate(arr, 3);

    for(int i=0;i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}