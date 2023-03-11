// time complexity : average case - O(n^2),  best case - O(n)
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void selectionSort(vector<int> &arr){                      
    int n = arr.size();
    for(int i=0; i < n-1; i++){
        int minIdx = i;                                        // find minimum element
        for(int j= i+1; j < n; j++){
            if(arr[minIdx] > arr[j]){
                minIdx = j;
            }
        }
        if(minIdx != i){
            int temp = arr[i];                                  // swap
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }
}

int main(){
    vector<int>myArr = {7,6,5,4,3,2,1};
    selectionSort(myArr);
    for(int i=0;i<myArr.size(); i++){
        cout<<myArr[i]<<" ";
    }

}