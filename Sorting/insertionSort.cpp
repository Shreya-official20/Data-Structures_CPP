// time complexity : average case - O(n^2),  best case - O(n)
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void insertionSort(vector<int> &arr){                      
    int n = arr.size();

    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;

        while(j>=0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main(){
    vector<int>arr = {7,6,5,4,3,2,1};
    insertionSort(arr);
    for(int i=0;i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

}