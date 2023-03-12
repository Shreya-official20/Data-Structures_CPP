//Binary search  >> time complexity: o(n)
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int binarySearch(vector<int> &arr, int data){
    int n = arr.size();
    int si = 0;               // start index
    int ei = n-1;             // end index

    while(si<=ei){
        int mid = (si + ei)/2;              //find mid of array
        if(arr[mid] == data){
            return mid;
        } else if(arr[mid] > data){
            ei = mid-1;
        } else {
            si = mid+1;
        }
    }
    return -1;
}

int main(){
   
    vector<int>arr = {4,10,16,24,32,46,76,112,144,182};
    int data = 46;

    cout<<binarySearch(arr, data)<<endl;
    
}