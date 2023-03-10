//find max element in the array(arr, num)
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int minElement(vector<int> &arr){
    int minEle = (int)1e9;
    for(int i=0;i<arr.size();i++){
        minEle = min(arr[i], minEle);
    }
    return minEle;
}


int main(){
    
    vector<int>arr = {1,2,3,4,5,6,7};

    // for(int i=0;i<arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }
    

    cout<<minElement(arr);
}














