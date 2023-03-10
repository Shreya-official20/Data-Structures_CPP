//find max element in the array(arr, num)
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int maxElement(vector<int> &arr){
    int maxEle = -(int)1e9;
    for(int i=0;i<arr.size(); i++){
        maxEle = max(arr[i], maxEle);
    }
    return maxEle;
}

int main(){
    
    vector<int>arr = {1,2,3,4,5,6,7};

    // for(int i=0;i<arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }
    

    cout<<maxElement(arr);
}















