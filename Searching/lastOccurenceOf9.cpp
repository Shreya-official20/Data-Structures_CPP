//Binary search
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int firstIndexOf9(vector<int> &arr, int data){
    int si = 0;
    int ei = arr.size()-1;

    while(si <= ei){
        int mid = (si+ei)/2;
        if(arr[mid] == data){
            if(mid+1 < arr.size() && arr[mid+1] == data){
                si = mid+1;
            } else{
                return mid;
            }
        } else if(arr[mid] > data){
            ei = mid - 1;
        } else {
            si = mid+1;
        }
    }
    return -1;
}

int main(){
   
    vector<int>arr = {1,2,2,2,2,2,3,4,5,6,7,8,9,9,9,9};
    int data = 9;

    // vector<int>arr = {0,1,2,2,2,2,2,2,4,5,6,6,6,6,7,8,8,8,8};
    // int data = 2;

    cout<<firstIndexOf9(arr, data);
}